#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{
  public:

    Logger(std::string name);
    ~Logger(void);
    void log(std::string const & dest, std::string const & message);

    typedef void (Logger::*logFn)(std::string const &);
    static logFn const fnArray[];

  private:

    void logToConsole(std::string const & str);
    void logToFile(std::string const & str);
    std::string const makeLogEntry(std::string const & str);
    std::string	_displayTimestamp( void );

    std::string _file_name;
};

#endif
