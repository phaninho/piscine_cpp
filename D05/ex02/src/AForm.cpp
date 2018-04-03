#include "AForm.hpp"

AForm::AForm(void): _name("no name"), _isSigned(0), _signGradRequest(0), _signGradExec(0)
{
    return ;
}

AForm::AForm(std::string name, bool isSigned, int gradreq, int gradexec): _name(name), _isSigned(isSigned), _signGradRequest(gradreq), _signGradExec(gradexec)
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

AForm::~AForm(void)
{
    return ;
}

void AForm::signForm(Bureaucrat const & bur)
{
    if (this->_isSigned == 0 && bur.getGrade() <= this->getSignGradExec())
    {
        this->_isSigned = 1;
        std::cout << bur.getName() << " signs " << *this << std::endl;
    }
    else if (this->_isSigned == 0 || bur.getGrade() > this->getSignGradExec())
        std::cout << bur.getName() << " can't sign " << *this << " cause " << bur.getName() << " grade is too low " << std::endl;
    else
        std::cout << this->_name << "is already signed " << std::endl;
    return ;
}

void AForm::beSigned(Bureaucrat const & bur)
{
    if (!this->getIsSigned())
    {
        try
        {
            if (bur.getGrade() <= this->getSignGradRequest())
                this->signForm(bur);
            else if (bur.getGrade() > this->getSignGradRequest())
                throw GradeTooLowException();
        }
        catch (GradeTooLowException const & e)
        {
            this->signForm(bur);
        }
    }
    else
        std::cout << this->_name << " is already signed " << bur.getName() << ", go find something else to do !" << std::endl;
}

std::string AForm::getName(void) const
{
    return (this->_name);
}

bool AForm::getIsSigned() const
{
    return (this->_isSigned);
}

int AForm::getSignGradRequest() const
{
    return (this->_signGradRequest);
}

int AForm::getSignGradExec() const
{
    return (this->_signGradExec);
}

std::ostream  &operator<<(std::ostream & o, AForm const & rhs)
{
    o << rhs.getName() << ", form grade request is " << rhs.getSignGradRequest() << " and form grade execution is " << rhs.getSignGradExec();
    if (rhs.getIsSigned())
        o << ". It is signed";
    else
        o << ". It is not signed";
    return o;
}


AForm::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

AForm::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

AForm::GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

AForm::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}
