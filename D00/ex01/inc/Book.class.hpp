#ifndef BOOK_CLASS_H
# define BOOK_CLASS_H

#include <string>


class Book
{

  public:

  Book(void);
  ~Book(void);
  void go(void);

  private:

  void add(void);
  void search(void);
  std::string w_str(size_t len);

};

#endif
