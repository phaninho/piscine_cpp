#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bob(1, "bob");
    Bureaucrat bil(150, "bil");

    ShrubberyCreationForm shru("dessine moi un mouton");
    RobotomyRequestForm robot("BionicBureaucrat");
    PresidentialPardonForm macron("WTF");

    std::cout << "#A Low graded Bureaucrat try access to Form's" << std::endl << std::endl;

    bil.executeForm(shru);
    bil.executeForm(robot);
    bil.executeForm(macron);

    std::cout << std::endl << "#A High graded Bureaucrat try access to Form's" << std::endl << std::endl;

    bob.executeForm(shru);
    bob.executeForm(robot);
    bob.executeForm(macron);

    std::cout << std::endl << "#A High graded Bureaucrat signs Form's" << std::endl << std::endl;

    shru.signForm(bob);
    robot.signForm(bob);
    macron.signForm(bob);

    std::cout << std::endl << "#A High graded Bureaucrat try access signed Form's" << std::endl << std::endl;

    bob.executeForm(shru);
    bob.executeForm(robot);
    bob.executeForm(macron);

    return 0;
}
