#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(int, std::string);
        ~Bureaucrat(void);
        std::string const getName(void) const;
        int getGrade(void) const;
        void increment(int);
        void decrement(int);

    private:
        int _grade;    
        std::string const _name;
    
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

std::ostream  &operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif