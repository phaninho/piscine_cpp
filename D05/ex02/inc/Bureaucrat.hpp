#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &);
        Bureaucrat(int, std::string);
        virtual ~Bureaucrat(void);

        Bureaucrat  &operator=(Bureaucrat const & rhs);

        std::string const getName(void) const;
        int getGrade(void) const;

        void increment(int);
        void decrement(int);

    private:
        int _grade;
        std::string _name;

    class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException(void);
            GradeTooHighException(GradeTooHighException const &);
            virtual ~GradeTooHighException(void) throw();

            GradeTooHighException &		operator=( GradeTooHighException const & rhs );

    };

    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException(void);
            GradeTooLowException(GradeTooLowException const &);
            virtual ~GradeTooLowException(void) throw();

            GradeTooLowException &		operator=( GradeTooLowException const & rhs );
    };
};

std::ostream  &operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
