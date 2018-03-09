#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

class Contact
{

  private:

  std::string _f_name;
  std::string _l_name;
  std::string _n_name;
  std::string _login;
  std::string _adress;
  std::string _mail;
  std::string _phone;
  std::string _b_date;
  std::string _f_meal;
  std::string _under_color;
  std::string _secret;
  int    _id;

  public:

  Contact(void);
  ~Contact(void);

  std::string  const getf_name(void) const;
  std::string  const getl_name(void) const;
  std::string  const getn_name(void) const;
  std::string  const getlogin(void) const;
  std::string  const getadress(void) const;
  std::string  const getmail(void) const;
  std::string  const getphone(void) const;
  std::string  const getb_date(void) const;
  std::string  const getf_meal(void) const;
  std::string  const getunder_color(void) const;
  std::string  const getsecret(void) const;
  int     get_id(void) const;
  void    setf_name(std::string const f_name);
  void    setl_name(std::string const l_name);
  void    setn_name(std::string const n_name);
  void    setlogin(std::string const login);
  void    setadress(std::string const adress);
  void    setmail(std::string const mail);
  void    setphone(std::string const phone);
  void    setb_date(std::string const b_date);
  void    setf_meal(std::string const f_meal);
  void    setunder_color(std::string const under_color);
  void    setsecret(std::string const secret);
  void	  set_id(void);
};

#endif
