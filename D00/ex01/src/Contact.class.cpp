#include "Contact.class.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;

Contact::Contact(void) :
  _f_name("first name"),
  _l_name("last name"),
  _n_name("nickname"),
  _login("login"),
  _adress("adress"),
  _mail("mail"),
  _phone("phone number"),
  _b_date("birth date"),
  _f_meal("favorite meal"),
  _under_color("underwear color"),
  _secret("secret")
{
  return;
}

Contact::~Contact(void)
{
  return;
}

string  const Contact::getf_name(void) const
{
  return(this->_f_name);
}

string  const Contact::getl_name(void) const
{
  return (this->_l_name);
}

string  const Contact::getn_name(void) const
{
  return (this->_n_name);
}

string  const Contact::getlogin(void) const
{
  return (this->_login);
}

string  const Contact::getadress(void) const
{
  return (this->_adress);
}

string  const Contact::getmail(void) const
{
  return (this->_mail);
}

string  const Contact::getphone(void) const
{
  return (this->_phone);
}

string  const Contact::getb_date(void) const
{
  return (this->_b_date);
}

string  const Contact::getf_meal(void) const
{
  return (this->_f_meal);
}

string  const Contact::getunder_color(void) const
{
  return (this->_under_color);
}

string  const Contact::getsecret(void) const
{
  return (this->_secret);
}

void    Contact::setf_name(string const f_name)
{
  if (!f_name.empty())
    this->_f_name = f_name;
}

void    Contact::setl_name(string const l_name)
{
  if (!l_name.empty())
    this->_l_name = l_name;
}

void    Contact::setn_name(string const n_name)
{
  if (!n_name.empty())
    this->_n_name = n_name;
}

void    Contact::setlogin(string const login)
{
  if (!login.empty())
    this->_login = login;
}

void    Contact::setadress(string const adress)
{
  if (!adress.empty())
    this->_adress = adress;
}

void    Contact::setmail(string const mail)
{
  if (!mail.empty())
    this->_mail = mail;
}

void    Contact::setphone(string const phone)
{
  if (!phone.empty())
    this->_phone = phone;
}

void    Contact::setb_date(string const b_date)
{
  if (!b_date.empty())
    this->_b_date = b_date;
}

void    Contact::setf_meal(string const f_meal)
{
  if (!f_meal.empty())
    this->_f_meal = f_meal;
}

void    Contact::setunder_color(string const under_color)
{
  if (!under_color.empty())
    this->_under_color = under_color;
}

void    Contact::setsecret(string const secret)
{
  if (!secret.empty())
    this->_secret = secret;
}
