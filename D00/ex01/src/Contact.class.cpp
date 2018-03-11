#include "Contact.class.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) :
  _f_name("entrer first name :"),
  _l_name("entrer last name :"),
  _n_name("entrer nickname :"),
  _login("entrer login :"),
  _adress("entrer adress :"),
  _mail("entrer mail :"),
  _phone("entrer phone number :"),
  _b_date("entrer birth date :"),
  _f_meal("entrer favorite meal :"),
  _under_color("entrer underwear color :"),
  _secret("entrer secret :")
{
  return;
}

Contact::~Contact(void)
{
  return;
}

std::string  const Contact::getf_name(void) const
{
  return(this->_f_name);
}

std::string  const Contact::getl_name(void) const
{
  return (this->_l_name);
}

std::string  const Contact::getn_name(void) const
{
  return (this->_n_name);
}

std::string  const Contact::getlogin(void) const
{
  return (this->_login);
}

std::string  const Contact::getadress(void) const
{
  return (this->_adress);
}

std::string  const Contact::getmail(void) const
{
  return (this->_mail);
}

std::string  const Contact::getphone(void) const
{
  return (this->_phone);
}

std::string  const Contact::getb_date(void) const
{
  return (this->_b_date);
}

std::string  const Contact::getf_meal(void) const
{
  return (this->_f_meal);
}

std::string  const Contact::getunder_color(void) const
{
  return (this->_under_color);
}

std::string  const Contact::getsecret(void) const
{
  return (this->_secret);
}

void    Contact::setf_name(std::string const f_name)
{
  if (!f_name.empty())
    this->_f_name = f_name;
}

void    Contact::setl_name(std::string const l_name)
{
  if (!l_name.empty())
    this->_l_name = l_name;
}

void    Contact::setn_name(std::string const n_name)
{
  if (!n_name.empty())
    this->_n_name = n_name;
}

void    Contact::setlogin(std::string const login)
{
  if (!login.empty())
    this->_login = login;
}

void    Contact::setadress(std::string const adress)
{
  if (!adress.empty())
    this->_adress = adress;
}

void    Contact::setmail(std::string const mail)
{
  if (!mail.empty())
    this->_mail = mail;
}

void    Contact::setphone(std::string const phone)
{
  if (!phone.empty())
    this->_phone = phone;
}

void    Contact::setb_date(std::string const b_date)
{
  if (!b_date.empty())
    this->_b_date = b_date;
}

void    Contact::setf_meal(std::string const f_meal)
{
  if (!f_meal.empty())
    this->_f_meal = f_meal;
}

void    Contact::setunder_color(std::string const under_color)
{
  if (!under_color.empty())
    this->_under_color = under_color;
}

void    Contact::setsecret(std::string const secret)
{
  if (!secret.empty())
    this->_secret = secret;
}
