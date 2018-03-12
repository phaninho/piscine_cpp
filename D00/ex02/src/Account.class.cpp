#include "Account.class.hpp"
#include <iostream>

Account::Account( int initial_deposit ) : _accountIndex(this->_nbAccounts)
{
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  this->_accountIndex = ++Account::_nbAccounts;
  std::cout << "index:" << this->_accountIndex << ';'<< "amount:" << this->_amount << ';' << "created" << std::endl;
  return ;
}

Account::~Account()
{
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  this->_accountIndex = Account::_nbAccounts--;
  std::cout << "index:" << this->_accountIndex << ';'<< "amount:" << this->_amount << ';' << "closed" << std::endl;
  return ;
}

void	Account::_displayTimestamp( void )
{
  std::time_t t = std::time(0);
  struct tm *now = std::localtime(&t);

  std::cout << now->tm_year + 1900;
  if ((now->tm_mon + 1) < 10)
    std::cout << '0' << now->tm_mon + 1;
  else
    std::cout << now->tm_mon + 1;
  if ((now->tm_mday) < 10)
    std::cout << '0' << now->tm_mday;
  else
    std::cout << now->tm_mday << "_";
  if (now->tm_hour < 10)
    std::cout << '0' << now->tm_hour;
  else
    std::cout << now->tm_hour;
   if (now->tm_min < 10)
    std::cout << '0' << now->tm_min;
  else
    std::cout << now->tm_min;
  if (now->tm_sec < 10)
    std::cout << '0' << now->tm_sec;
  else
    std::cout << now->tm_sec;
}

void	Account::displayStatus( void ) const
{
  // std::cout << "index:" << this->_accountIndex << ';'<< "amount:" << this->_amount << ';' << "deposits:" << this->_nbDeposits << ';' <<  "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
  // std::cout << "[";
  // Account::_displayTimestamp();
  // std::cout << "] ";
}

int	Account::_nbAccounts = -1;
int	Account::_nbCheckAmount = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
// void	makeDeposit( int deposit );
