#include "Logger.hpp"

int main()
{
  Logger log1("baby.txt");

  log1.log("logToConsole", "Hello wolrd!");
  log1.log("logToFile", "Hello Baby!");

  return (0);
}
