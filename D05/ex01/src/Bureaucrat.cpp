#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):  _grade(0), _name("no name")
{
    return ;
}

Bureaucrat::Bureaucrat(int nb, std::string name): _grade(nb), _name(name)
{
    try
    {
        if (nb < 1)
            throw GradeTooHighException();
        else if (nb > 150)
            throw GradeTooLowException();            
    }
    catch (GradeTooHighException & e)
    {
        std::cout << *this << " is too high" << std::endl;
    }
    catch (GradeTooLowException & e)
    {
        std::cout << *this << " is too low" << std::endl;
    }
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

void Bureaucrat::increment(int nb)
{
    this->_grade -= nb;
    try
    {
        if (this->_grade < 1)
            throw GradeTooHighException();
        else if (this->_grade > 150)
            throw GradeTooLowException();   
    }
    catch (GradeTooHighException & e)
    {
        std::cout << *this << " is too high" << std::endl;
    }
    catch (GradeTooLowException & e)
    {
        std::cout << *this << " is too low" << std::endl;
    }
    return ;
}

void Bureaucrat::decrement(int nb)
{
    this->_grade += nb;
    try
    {
        if (this->_grade < 1)
            throw GradeTooHighException();
        else if (this->_grade > 150)
            throw GradeTooLowException();   
    }
    catch (GradeTooHighException & e)
    {
        std::cout << *this << " is too high" << std::endl;
    }
    catch (GradeTooLowException & e)
    {
        std::cout << *this << " is too low" << std::endl;
    }
    return ;
}

std::string const Bureaucrat::getName(void) const
{
    return (this->_name);
}

int  Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

std::ostream  &operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}