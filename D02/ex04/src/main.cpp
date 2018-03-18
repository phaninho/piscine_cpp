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

bool  is_bracket(char c)
{
  if (c == '(' || c == ')')
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

void make_operation(std::string *array, int sym_nb)
{
  for (int i = 0; i <= sym_nb; i++)
    std::cout << array[i] << std::endl;
}

int main(int ac, char **av)
{
  std::string str;

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
  int i = 0;
  while(std::getline(ss, array[i], '_'))
    i++;
  make_operation(array, sym_nb);
  return (0);
}
