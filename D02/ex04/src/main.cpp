#include <iostream>
#include <string>

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

bool  is_operator(char c)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '.' || c == '(' || c == ')')
    return (1);
  return (0);
}

bool  check_str_syntax(std::string str)
{
  int len = str.length();
  for (int i = 0; i < len; i++)
  {
    if (!std::isdigit(str[i]))
      if (!is_operator(str[i]))
        return (1);
  }
  return (0);
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
  if (check_str_syntax(str))
  {
    std::cout << "operation syntax error" << std::endl;
    return (1);
  }
  std::cout << str << std::endl;
  return (0);
}
