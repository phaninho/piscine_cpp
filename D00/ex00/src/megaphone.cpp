#include <iostream>

char *ft_toupper(char *str)
{
  for (size_t i = 0; i < std::strlen(str); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  }
  return (str);
}

int  main(int ac, char **av)
{
  if (ac < 2)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  else
  {
    for (int i = 0; i < ac - 1; i++)
      std::cout << ft_toupper(av[i + 1]);
  }
  std::cout << std::endl;
    return (0);
}
