#include "Logger.hpp"
#include <iostream>
#include <string>
#include <fstream>

std::string fnDest[2] = {"logToConsole", "logToFile"};
Logger::logFn const Logger::fnArray[2] = {&Logger::logToConsole, &Logger::logToFile};

Logger::Logger(std::string name): _file_name(name)
{
  return ;
}

Logger::~Logger(void)
{
  return ;
}

void Logger::logToConsole(std::string const & str)
{
  std::cout << str << std::endl;
}

void Logger::logToFile(std::string const & str)
{
  std::ofstream ofile(this->_file_name, std::ios::app);

  if (ofile.is_open() == false)
  {
    std::cout << "open file out failes" << std::endl;
    return ;
  }
  else
    ofile << str << std::endl;
  ofile.close();
}

void Logger::log(std::string const & dest, std::string const & message)
{
    for (int i = 0; i < 2; i++)
    {
      if (dest == fnDest[i])
      {
        (this->*(Logger::fnArray[i]))(message);
        break ;
      }
    }
}
