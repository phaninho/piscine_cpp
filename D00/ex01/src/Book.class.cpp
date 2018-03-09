#include "Book.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;


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
  string action;

  while (!out)
  {
    getline(cin, action);
    if (action == "EXIT")
      out = 1;
    else if (action == "ADD")
      Book::add();
    else if (action == "SEARCH")
      Book::search();
  }
  cout << "sortie du programme" << endl;
}

void Book::add(void)
{
  string entry;

  cout << "entrer " << Contact.getf_name() << " : ";
  getline(cin, entry);
  Contact.setf_name(entry);
  cout << "entrer " << Contact.getl_name() << " : ";
  getline(cin, entry);
  Contact.setl_name(entry);
  cout << "entrer " << Contact.getn_name() << " : ";
  getline(cin, entry);
  Contact.setn_name(entry);
  cout << "entrer " << Contact.getlogin() << " : ";
  getline(cin, entry);
  Contact.setlogin(entry);
  cout << "entrer " << Contact.getadress() << " : ";
  getline(cin, entry);
  Contact.setadress(entry);
  cout << "entrer " << Contact.getmail() << " : ";
  getline(cin, entry);
  Contact.setmail(entry);
  cout << "entrer " << Contact.getphone() << " : ";
  getline(cin, entry);
  Contact.setphone(entry);
  cout << "entrer " << Contact.getb_date() << " : ";
  getline(cin, entry);
  Contact.setb_date(entry);
  cout << "entrer " << Contact.getf_meal() << " : ";
  getline(cin, entry);
  Contact.setf_meal(entry);
  cout << "entrer " << Contact.getunder_color() << " : ";
  getline(cin, entry);
  Contact.setunder_color(entry);
  cout << "entrer " << Contact.getsecret() << " : ";
  getline(cin, entry);
  Contact.setsecret(entry);

  Contact.set_id();
  // cout << Contact.get_id() << endl;

  //
  // cout << Contact.getf_name() << endl << Contact.getl_name() << endl << Contact.getn_name() << endl << Contact.getlogin() << endl << Contact.getadress() << endl << Contact.getmail() << endl << Contact.getphone() << endl << Contact.getb_date() << endl << Contact.getf_meal() << endl << Contact.getunder_color() << endl << Contact.getsecret() << endl;
}

void	Book::search(void) const
{
  int id = Contact.get_id();
  cout << "___________________________________________" << endl;
  cout << "| id |  first name | last name | nickname  |" << endl;
  cout << "|____|_____________|___________|___________|" << endl;
  if (id > 0)
  {
    cout << "| " << id - 1 << " | " << Contact.getf_name() << " | " << Contact.getl_name() << " | " << Contact.getn_name() << " |" << endl;
    cout << "|_________________________________________|" << endl;

  }
}
