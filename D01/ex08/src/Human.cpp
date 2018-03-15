#include "Human.hpp"
#include <string>
#include <iostream>

std::string const action_array[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
Human::HumanMemFn const Human::function_array[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

Human::Human(std::string name): _human_name(name)
{
  return ;
}

Human::~Human(void)
{
  return ;
}

void Human::meleeAttack(std::string const & target)
{
  std::cout << this->_human_name << " appel ca horde de zombies pour attaquer " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
  std::cout << this->_human_name << " utilise son attque range contre " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
  std::cout << this->_human_name << " blesse " << target << " avec son tir d'intimidation" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
  for (int i = 0; i < 3; i++)
  {
    if (action_name == action_array[i])
    {
      (this->*(Human::function_array[i]))(target);
      break ;
    }
  }
}

std::string const Human::getname(void) const
{
  return (this->_human_name);
}
