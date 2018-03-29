#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat bob(55, "bob");
    Form houseForm("House contract", 0, 55, 25);
    Form warForm("Nueclear Attack", 0, 1, 1);
    std::cout << bob.getName() << " is grade "<< bob.getGrade() << std::endl;
    // bob.increment(1);
    // std::cout << "after increment, " << bob.getName() << " grade "<< bob.getGrade() << std::endl;
    houseForm.beSigned(bob);

    bob.increment(30);    
    std::cout << "after increment, " << bob.getName() << " is grade "<< bob.getGrade() << std::endl;    
    houseForm.beSigned(bob);
    
    bob.decrement(34);
    std::cout << "after decrement, " << bob.getName() << " is grade "<< bob.getGrade() << std::endl;
    
    Bureaucrat donald(1, "Donald Trump");
    warForm.beSigned(donald);
    std::cout << "Right away after the field be cleansed you can send the SEAL's and let's make America great again ! " << std::endl;
    
    return 0;
}