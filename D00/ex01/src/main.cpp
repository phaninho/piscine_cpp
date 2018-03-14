#include "Contact.class.hpp"
#include "Book.class.hpp"
#include <iostream>
#include <string>

int   main(void)
{

  Book book;

  std::cout << "         ___________ " << std::endl;
  std::cout << "      = /  _______  \\" << std::endl;
  std::cout << "     8 |__|       |__|" << std::endl;
  std::cout << "     8  _||_______||_" << std::endl;
  std::cout << "     8 |             |" << std::endl;
  std::cout << "     8 |     ___     |" << std::endl;
  std::cout << "     8 |    /234\\    |" << std::endl;
  std::cout << "     8 |   |1   5|   |" << std::endl;
  std::cout << "     8 |    \\876/    |" << std::endl;
  std::cout << "      \\|             |" << std::endl;
  std::cout << "       |_____________|" << std::endl;
  std::cout << "        |__|     |__|" << std::endl;
  std::cout << std::endl << "   Bienvenue dans PhoneBook!" << std::endl << std::endl;
  std::cout << "Entrez une des commandes suivantes:" << std::endl;
  std::cout << " # ADD (ajouter un contact)" << std::endl << " # SEARCH (chercher un contact)" << std::endl << " # EXIT (sortir et supprimer tous les contacts)" << std::endl;
  book.go();
  return (0);
}
