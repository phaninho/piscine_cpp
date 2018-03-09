#include "Book.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

Contact Contact;

Book::Book(void)
{
  return ;
}

Book::~Book(void)
{
  return ;
}

void Book::go(void)
{
  int out = 0;
  std::string action;

  while (!out)
  {
    std::getline(std::cin, action);
    if (action == "EXIT")
      out = 1;
    else if (action == "ADD")
      Book::add();
    else if (action == "SEARCH")
      Book::search();
  }
  std::cout << "sortie du programme" << std::endl;
}

void Book::add(void)
{
  std::string entry;

  std::cout << "entrer " << Contact.getf_name() << " : ";
  std::getline(std::cin, entry);
  Contact.setf_name(entry);
  std::cout << "entrer " << Contact.getl_name() << " : ";
  std::getline(std::cin, entry);
  Contact.setl_name(entry);
  std::cout << "entrer " << Contact.getn_name() << " : ";
  std::getline(std::cin, entry);
  Contact.setn_name(entry);
  std::cout << "entrer " << Contact.getlogin() << " : ";
  std::getline(std::cin, entry);
  Contact.setlogin(entry);
  std::cout << "entrer " << Contact.getadress() << " : ";
  std::getline(std::cin, entry);
  Contact.setadress(entry);
  std::cout << "entrer " << Contact.getmail() << " : ";
  std::getline(std::cin, entry);
  Contact.setmail(entry);
  std::cout << "entrer " << Contact.getphone() << " : ";
  std::getline(std::cin, entry);
  Contact.setphone(entry);
  std::cout << "entrer " << Contact.getb_date() << " : ";
  std::getline(std::cin, entry);
  Contact.setb_date(entry);
  std::cout << "entrer " << Contact.getf_meal() << " : ";
  std::getline(std::cin, entry);
  Contact.setf_meal(entry);
  std::cout << "entrer " << Contact.getunder_color() << " : ";
  std::getline(std::cin, entry);
  Contact.setunder_color(entry);
  std::cout << "entrer " << Contact.getsecret() << " : ";
  std::getline(std::cin, entry);
  Contact.setsecret(entry);

  Contact.set_id();
  // std::cout << Contact.get_id() << std::endl;

  //
  // std::cout << Contact.getf_name() << std::endl << Contact.getl_name() << std::endl << Contact.getn_name() << std::endl << Contact.getlogin() << std::endl << Contact.getadress() << std::endl << Contact.getmail() << std::endl << Contact.getphone() << std::endl << Contact.getb_date() << std::endl << Contact.getf_meal() << std::endl << Contact.getunder_color() << std::endl << Contact.getsecret() << std::endl;
}

void	Book::search(void)
{
  int i;

  i = -1;
  std::cout << " ________________________________________________" << std::endl;
  std::cout << "| id |  first name |  last name   |   nickname   |" << std::endl;
  std::cout << "|____|_____________|______________|______________|" << std::endl;
  if (++i < Contact.get_id())
  {
    std::cout << "| " << i << "  | " << Contact.getf_name();
    // len = Contact.getf_name().length();
    // w_str = Book::w_str(Contact.getf_name().length());
    std::cout << Book::w_str(Contact.getf_name().length()) << "| " << Contact.getl_name() << Book::w_str(Contact.getl_name().length()) << " | " << Contact.getn_name() << Book::w_str(Contact.getn_name().length()) << " |" << std::endl;

  }
  std::cout << "|____|_____________|______________|______________|" << std::endl;

}

std::string Book::w_str(size_t s_len)
{
  size_t len;
  size_t i = 0;
  std::string wstr;

  len = 12;
  while (s_len < len)
  {
      wstr += ' ';
      i++;
      s_len++;
  }
  return (wstr);
}
