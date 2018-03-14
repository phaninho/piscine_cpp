#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
  std::ifstream ifile;
  std::string   s1;
  std::string   s2;
  std::string   filename;
  std::string   newfilename;
  std::string   buf;
  int offset;
  int len;

  if (ac < 4)
  {
    std::cout << "usage: ./replace filename string1 string2";
    return (1);
  }
  filename = av[1];
  ifile.open(filename);
  if (ifile.is_open() == false)
  {
    std::cout << "open file in failes" << std::endl;
    return (1);
  }
  s1 = av[2];
  s2 = av[3];
  len = s1.length();
  newfilename = filename + ".replace";
  std::ofstream ofile(newfilename);
  if (ofile.is_open() == false)
  {
    std::cout << "open file out failes" << std::endl;
    return (1);
  }
  while (!ifile.eof() && getline(ifile, buf))
  {
      while ((offset = buf.find(s1, 0)) != (int)std::string::npos)
        buf.replace(offset, len, s2);
      ofile << buf << std::endl;
  }
  ifile.close();
  ofile.close();
  return (0);
}
