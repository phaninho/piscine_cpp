#include "Book.class.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

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
      cout << "ajout de contact" << endl;
    else if (action == "SEARCH")
      cout << "recherche de contact" << endl;
  }
  cout << "sortie du programme" << endl;
}
