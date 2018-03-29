#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bob(3, "bob");
    std::cout << bob.getName() << " grade "<< bob.getGrade() << std::endl;
    bob.increment(1);
    std::cout << "after increment, " << bob.getName() << " grade "<< bob.getGrade() << std::endl;
    
    bob.decrement(34);
    std::cout << "after decrement, " << bob.getName() << " grade "<< bob.getGrade() << std::endl;
    bob.increment(37);
    std::cout << "after increment, " << bob.getName() << " grade "<< bob.getGrade() << std::endl;
    
    Bureaucrat bil(0, "bil");
    Bureaucrat bu(151, "bu");
    std::cout << bu.getName() << " grade "<< bu.getGrade() << std::endl;
    
    bu.increment(1);
    std::cout << "after increment, " << bu.getName() << " grade "<< bu.getGrade() << std::endl;
    
    bu.decrement(1);
    std::cout << "after decrement, " << bu.getName() << " grade "<< bu.getGrade() << std::endl;
    
    
    Bureaucrat bab(33, "bab");
    
    return 0;
}