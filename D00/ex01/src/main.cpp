#include "Contact.class.hpp"
#include "Book.class.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int   main(void)
{

  Book book;

  cout << "         ___________ " << endl;
  cout << "      = /  _______  \\" << endl;
  cout << "     8 |__|       |__|" << endl;
  cout << "     8  _||_______||_" << endl;
  cout << "     8 |             |" << endl;
  cout << "     8 |     ___     |" << endl;
  cout << "     8 |    /234\\    |" << endl;
  cout << "     8 |   |1   5|   |" << endl;
  cout << "     8 |    \\876/    |" << endl;
  cout << "      \\|             |" << endl;
  cout << "       |_____________|" << endl;
  cout << "        |__|     |__|" << endl;

  // string buf;
  // Contact first;
  cout << endl << "   Bienvenue dans PhoneBook!" << endl << endl;
  cout << "Entrez une des commandes suivantes:" << endl;
  cout << " # ADD (ajouter un contact)" << endl << " # SEARCH (chercher un contact)" << endl << " # EXIT (sortir et supprimer tous les contacts)" << endl;

  book.go();
  // cout << first.getf_name() << endl;
  // cin >> buf;
  // first.setf_name(buf);
  // cin >> buf;
  // first.setl_name(buf);
  // cout << first.getf_name() << ' ' << first.getl_name() << endl;
  return (0);
}
