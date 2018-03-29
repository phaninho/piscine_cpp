#include "Form.hpp"

Form::Form(void): _name("no name"), _isSigned(0), _signGradRequest(0), _signGradExec(0)
{
    return ;
}

Form::Form(std::string name, bool isSigned, int gradreq, int gradexec): _name(name), _isSigned(isSigned), _signGradRequest(gradreq), _signGradExec(gradexec)
{
    try
    {
        if (gradreq < 1 || gradexec < 1)
            throw GradeTooHighException();
        else if (gradreq > 150 || gradexec > 150)
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

Form::~Form(void)
{
    return ;
}

void Form::signForm(Bureaucrat const & bur, bool b)
{
    if (b == 1 && bur.getGrade() <= this->getSignGradExec())
    {
        this->_isSigned = 1;
        std::cout << bur.getName() << " signs " << *this << std::endl;
    }
    else if (b == 0 || bur.getGrade() > this->getSignGradExec())
        std::cout << bur.getName() << " cannot sign " << *this << " cause " << bur.getName() << " grade is too low " << std::endl;
    return ;        
}

void Form::beSigned(Bureaucrat const & bur)
{
    if (!this->getIsSigned())
    {
        try
        {
            if (bur.getGrade() <= this->getSignGradRequest())
            {
                this->signForm(bur, 1);
            }
            else if (bur.getGrade() > this->getSignGradRequest())
                throw GradeTooLowException();                        
        }
        catch (GradeTooLowException const & e)
        {
            this->signForm(bur, 0);
        }
    }
    else
        std::cout << this->_name << " is already signed " << bur.getName() << ", go find something else to do !" << std::endl;
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getIsSigned() const
{
    return (this->_isSigned);
}

int Form::getSignGradRequest() const
{
    return (this->_signGradRequest);
}

int Form::getSignGradExec() const
{
    return (this->_signGradExec);
}

std::ostream  &operator<<(std::ostream & o, Form const & rhs)
{
    o << rhs.getName() << ", form grade request is " << rhs.getSignGradRequest() << " and form grade execution is " << rhs.getSignGradExec();
    if (rhs.getIsSigned())
        o << ". It is signed";
    else
        o << ". It is not signed";
    return o;
}


Form::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

Form::GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}