#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm
{
    public:
        AForm(void);
        AForm(AForm const &);
        AForm(std::string, bool, int, int);
        virtual ~AForm(void);

        void        beSigned(Bureaucrat const &);
        void        signForm(Bureaucrat const &);

        std::string getName() const;
        bool        getIsSigned() const;
        int         getSignGradRequest() const;
        int         getSignGradExec() const;
        virtual void execute(Bureaucrat const & executor) const = 0;

        AForm &operator=(AForm const &);

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


    protected:
        std::string const _name;
        bool _isSigned;
        int const _signGradRequest;
        int const _signGradExec;

};

std::ostream  &operator<<(std::ostream & o, AForm const & rhs);

#endif
