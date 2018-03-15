#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>

class Human
{

  private:

    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);

    std::string const _human_name;

  public:
    Human(std::string name);
    ~Human(void);
    void action(std::string const & action_name, std::string const & target);
    std::string const getname(void) const;

    typedef void (Human::*HumanMemFn)(std::string const &);
    static HumanMemFn const function_array[];
};
#endif
