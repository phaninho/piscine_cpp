#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
    public:
        Form(void);
        Form(Form const &);
        Form(std::string, bool, int, int);
        virtual ~Form(void);

        void beSigned(Bureaucrat const &);
        void signForm(Bureaucrat const &, bool);

        std::string getName() const;
        bool getIsSigned() const;
        int  getSignGradRequest() const;
        int  getSignGradExec() const;

        Form &operator=(Form const &);
        
    private:
        std::string const _name;
        bool _isSigned;
        int const _signGradRequest;
        int const _signGradExec;

    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException(void);
            GradeTooHighException(GradeTooHighException const &);
            virtual ~GradeTooHighException(void) throw();

            GradeTooHighException &operator=( GradeTooHighException const & rhs );

    };

    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException(void);
            GradeTooLowException(GradeTooLowException const &);
            virtual ~GradeTooLowException(void) throw();

            GradeTooLowException &operator=( GradeTooLowException const & rhs );
    };
};

std::ostream  &operator<<(std::ostream & o, Form const & rhs);

#endif
