#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
  std::string   str_in;
  std::ifstream ifile;
  std::string   filename;
  std::string   buf;

  if (ac == 1)
  {
    while (std::getline(std::cin,str_in))
      std::cout << str_in << std::endl;
  }
  for (int i = 1; i < ac; i++)
  {
    if (!strcmp(av[i], "-"))
    {
      while (std::getline(std::cin,str_in))
        std::cout << str_in << std::endl;
    }
    else
    {
      filename = av[i];
      ifile.open(filename);
      if (ifile.is_open() == true)
      {
        while (!ifile.eof() && getline(ifile, buf))
          std::cout << buf << std::endl;
      }
      else
        std::cout << "cat: " << av[i] << ": No such file or directory" << std::endl;
    }
  }
  return (0);
}
