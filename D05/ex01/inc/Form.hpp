#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form(void);
        Form(std::string, bool, int, int);
        ~Form(void);
        std::string getName() const;
        bool getIsSigned() const;
        int getSignGradRequest() const;
        int getSignGradExec() const;
        void beSigned(Bureaucrat const &);
        void signForm(Bureaucrat const &, bool);
    private:
        std::string const _name;
        bool _isSigned;
        int const _signGradRequest;
        int const _signGradExec;      
    
    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException(void);
            ~GradeTooHighException(void) throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException(void);
            ~GradeTooLowException(void) throw();
    };          
};

std::ostream  &operator<<(std::ostream & o, Form const & rhs);

#endif