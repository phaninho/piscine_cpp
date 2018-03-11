#include "Book.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

Contact Contact[8];

Book::Book(void) : _id(0)
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
      Book::_add();
    else if (action == "SEARCH")
      Book::_search();
  }
  std::cout << "sortie du programme" << std::endl;
}

int      Book::_get_id(void) const
{
  return (this->_id);
}


void	 Book::_set_id(void)
{
  this->_id++;
}

void Book::_add(void)
{
  std::string entry;
  int   i;

  i = Book::_get_id();
  if (i > 7)
    std::cout << "Memory is full" << std::endl;
  else
  {
    std::cout << Contact[i].getf_name();
    std::getline(std::cin, entry);
    Contact[i].setf_name(entry);
    std::cout << Contact[i].getl_name();
    std::getline(std::cin, entry);
    Contact[i].setl_name(entry);
    std::cout << Contact[i].getn_name();
    std::getline(std::cin, entry);
    Contact[i].setn_name(entry);
    std::cout << Contact[i].getlogin();
    std::getline(std::cin, entry);
    Contact[i].setlogin(entry);
    std::cout << Contact[i].getadress();
    std::getline(std::cin, entry);
    Contact[i].setadress(entry);
    std::cout << Contact[i].getmail();
    std::getline(std::cin, entry);
    Contact[i].setmail(entry);
    std::cout << Contact[i].getphone();
    std::getline(std::cin, entry);
    Contact[i].setphone(entry);
    std::cout << Contact[i].getb_date();
    std::getline(std::cin, entry);
    Contact[i].setb_date(entry);
    std::cout << Contact[i].getf_meal();
    std::getline(std::cin, entry);
    Contact[i].setf_meal(entry);
    std::cout << Contact[i].getunder_color();
    std::getline(std::cin, entry);
    Contact[i].setunder_color(entry);
    std::cout << Contact[i].getsecret();
    std::getline(std::cin, entry);
    Contact[i].setsecret(entry);
    Book::_set_id();
  }
}

void	Book::_search(void)
{
  int i;

  i = -1;
  std::cout << " ______________________________________" << std::endl;
  std::cout << "| id |  first n |  last n  | nickname |" << std::endl;
  std::cout << "|____|__________|__________|__________|" << std::endl;
  while (++i < Book::_get_id())
  {
    std::cout << "| " << i << "  |" << Book::_getrightlength(Contact[i].getf_name());
    std::cout << Book::_w_str(Contact[i].getf_name().length()) << "|" << Book::_getrightlength(Contact[i].getl_name()) << Book::_w_str(Contact[i].getl_name().length()) << "|" << Book::_getrightlength(Contact[i].getn_name()) << Book::_w_str(Contact[i].getn_name().length()) << "|" << std::endl;

  }
  std::cout << "|____|__________|__________|__________|" << std::endl;

}

std::string  Book::_getrightlength(std::string str) const
{
    if (str.length() > 10)
      return (str.substr(0, 9) + ".");
    return (str);
}

std::string Book::_w_str(size_t s_len)
{
  size_t len;
  size_t i = 0;
  std::string wstr;

  len = 10;
  while (s_len < len)
  {
      wstr += ' ';
      i++;
      s_len++;
  }
  return (wstr);
}
