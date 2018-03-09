#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

using std::string;

class Contact
{

  private:

  string _f_name;
  string _l_name;
  string _n_name;
  string _login;
  string _adress;
  string _mail;
  string _phone;
  string _b_date;
  string _f_meal;
  string _under_color;
  string _secret;
  int    _id;

  public:

  Contact(void);
  ~Contact(void);

  string  const getf_name(void) const;
  string  const getl_name(void) const;
  string  const getn_name(void) const;
  string  const getlogin(void) const;
  string  const getadress(void) const;
  string  const getmail(void) const;
  string  const getphone(void) const;
  string  const getb_date(void) const;
  string  const getf_meal(void) const;
  string  const getunder_color(void) const;
  string  const getsecret(void) const;
  int     get_id(void) const;
  void    setf_name(string const f_name);
  void    setl_name(string const l_name);
  void    setn_name(string const n_name);
  void    setlogin(string const login);
  void    setadress(string const adress);
  void    setmail(string const mail);
  void    setphone(string const phone);
  void    setb_date(string const b_date);
  void    setf_meal(string const f_meal);
  void    setunder_color(string const under_color);
  void    setsecret(string const secret);
  void	  set_id(void);
};

#endif
