#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(int age, std::string gender, std::string name, std::string city) : _legs(4),
                                                                              _age(age),
                                                                              _gender(gender),
                                                                              _name(name),
                                                                              _city(city)
{
  std::cout << "There is a new Pony in town, ";
  if (this->_gender == "male")
    std::cout << "his";
  else
    std::cout << "her";

  std::cout << " name is " << this->_name << ", it's a " << this->_age << " years old " << this->_gender << " and ";
  if (this->_gender == "male")
    std::cout << "he";
  else
    std::cout << "she";
  std::cout << " comes from " << this->_city <<std::endl;
  return ;
}

Pony::~Pony(void)
{
  std::cout << this->_name << " is dead at the age of " << this->_age << ", ";
  if (this->_gender == "male")
    std::cout << "he";
  else
    std::cout << "she";
  std::cout << " still had ";
  if (this->_gender == "male")
    std::cout << "his ";
  else
    std::cout << "her ";
  std::cout << this->_legs << " legs." << std::endl;
  return ;
}
