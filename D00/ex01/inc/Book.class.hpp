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

  void _add(void);
  void _search(void);
  std::string _w_str(size_t len);
  int     _get_id(void) const;
  void	  _set_id(void);
  std::string const  _getrightlength(std::string str) const;

  int _id;
};

#endif
