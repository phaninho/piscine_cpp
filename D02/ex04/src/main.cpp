#include <iostream>
#include <string>
#include <sstream>

std::string space_remove(char *av)
{
  std::string str(av);
  int len = str.length();
  str = "";

  for (int i = 0; i < len; i++)
  {
    if (!isspace(av[i]))
      str += av[i];
  }
  return (str);
}

bool is_left_bracket(std::string c)
{
  if (c == "(")
    return (1);
  return (0);
}

bool is_left_bracket(char c)
{
  if (c == '(')
    return (1);
  return (0);
}

bool is_right_bracket(std::string c)
{
  if (c == ")")
    return (1);
  return (0);
}

bool is_right_bracket(char c)
{
  if (c == ')')
    return (1);
  return (0);
}

bool  is_bracket(char c)
{
  if (is_left_bracket(c) || is_right_bracket(c))
    return (1);
  return (0);
}

bool  is_bracket(std::string c)
{
  if (is_left_bracket(c) || is_right_bracket(c))
    return (1);
  return (0);
}

bool  is_operator(char c, std::string *delim_str)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '.' || is_bracket(c))
  {
    if (c != '.')
      *delim_str += '_';
    return (1);
  }
  return (0);
}

bool  is_operator(std::string c)
{
  if (c == "+" || c == "-" || c == "*" || c == "/" || c == "." || is_bracket(c))
    return (1);
  return (0);
}

bool  check_str_syntax(std::string *str)
{
  int t = 0;
  int len = str->length();
  std::string delim_str = "";

  for (int i = 0; i < len; i++)
  {
    if (!std::isdigit((*str)[i]))
    {
      if (!is_operator((*str)[i], &delim_str))
        return (1);
        t = 1;
    }
    delim_str += (*str)[i];
    if (t == 1)
    {
      t = 0;
      delim_str += '_';
    }
  }
  *str = delim_str;
  return (0);
}

int sym_count(std::string str)
{
  int count = 0;

  for (size_t i = 0; i < str.length(); i++)
    if (str[i] == '_')
      count++;
  return (count);
}

// int   bracket_counter(std::string *array, int sym_nb)
// {
//   int bracket_nb = 0;
//
//   for (int i = 0; i <= sym_nb; i++)
//     if (array[i] == "(")
//       bracket_nb++;
//   return (bracket_nb);
// }

int   wich_operator(std::string array)
{
  if (array == "+")
    return (1);
  else if (array == "-")
    return (2);
  else if (array == "*")
    return (3);
  else if (array == "/")
    return (4);
  return (0);
}

int   calcul(std::string **array, int lb, int rb)
{
  int a = 0;
  int b = 0;
  int rsl = 0;
  int op = 0;

  for (int i = lb; i < rb; i++)
  {
    while ((*array)[i].empty())
      i++;
    if (is_left_bracket((*array)[i]))
      (*array)[i] = "";
    else if (is_right_bracket((*array)[i]))
      (*array)[i] = "";
    else if (!is_operator((*array)[i]))
    {
      if (a == 0)
        a = std::stoi((*array)[i]);
      else if (b == 0)
          b = std::stoi((*array)[i]);
      if (a != 0 && b != 0 && op != 0)
      {
        if (op == 1)
          rsl = a + b;
        else if (op == 2)
          rsl = a - b;
        else if (op == 3)
          rsl = a * b;
        else if (op == 4)
          rsl = a / b;
        a = 0;
        b = 0;
        op = 0;
      }
      (*array)[i] = "";
    }
    else if (is_operator((*array)[i]))
    {
      op = wich_operator((*array)[i]);
      (*array)[i] = "";
    }
  }
  return (rsl);
}

void make_operation(std::string *array, int len)
{
  // int bracket_nb = bracket_counter(array, sym_nb);
  // int a = 0;
  // int b = 0;
  int rsl = 0;
  int lft_brkt_pos = 0;
  int rgt_brkt_pos = 0;

  for (int i = 0; i <= len; i++)
  {
    while (array[i].empty())
      i++;
    for (int j = 0; j <= len; j++)
    {
      if (is_left_bracket(array[j]))
        lft_brkt_pos = j;
      else if (is_right_bracket(array[j]))
      {
        rgt_brkt_pos = j;
        std::cout << array[lft_brkt_pos] << " " << array[rgt_brkt_pos] << std::endl;
        rsl = calcul(&array, lft_brkt_pos, rgt_brkt_pos);
        std::cout << rsl << std::endl;
        i = 0;
        break;
      }
    }
    // if (!is_operator(array[i]))
    // {
    //   if (a == 0)
    //     a = std::stoi(array[i]);
    //   else if (b == 0)
    //       b = std::stoi(array[i]);
    //   if (a != 0 && b != 0)
    //   {
    //     a += b;
    //     b = 0;
    //   }
    //   std::cout << a << std::endl;
    // }
  }
}

int main(int ac, char **av)
{
  std::string str;
  int i = 0;

  if (ac != 2)
  {
    std::cout << "usage: ./eval_expr \"calcul to evaluate\"" << std::endl;
    return (1);
  }
  str = space_remove(av[1]);
  if (check_str_syntax(&str))
  {
    std::cout << "operation syntax error" << std::endl;
    return (1);
  }
  int sym_nb = sym_count(str);
  std::istringstream ss(str);
  std::string array[sym_nb];

  while(std::getline(ss, array[i], '_'))
    i++;
  make_operation(array, sym_nb);
  return (0);
}
