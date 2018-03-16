#include "Logger.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

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
  std::string buf = this->makeLogEntry(str);
  std::cout << buf << std::endl;
}

void Logger::logToFile(std::string const & str)
{
  std::string buf = this->makeLogEntry(str);
  std::ofstream ofile(this->_file_name, std::ios::app);

  if (ofile.is_open() == false)
  {
    std::cout << "open file out failes" << std::endl;
    return ;
  }
  else
    ofile << buf << std::endl;
  ofile.close();
}

std::string const Logger::makeLogEntry(std::string const & str)
{
  std::string buf = this->_displayTimestamp();
  buf += str;
  return (buf);
}

std::string	Logger::_displayTimestamp( void )
{
  time_t rawtime;
  struct tm *timeinfo;
  char buffer[80];
  std::string datestr = "[";

  time (&rawtime);
  timeinfo = localtime(&rawtime);

  strftime(buffer, sizeof(buffer), "%d-%m-%Y %I:%M:%S", timeinfo);
  datestr += buffer;
  datestr += "] ";
  return (datestr);
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
