#include "Account.class.hpp"
#include <iostream>

Account::Account( int initial_deposit ) : _accountIndex(this->_nbAccounts),
                                          _amount(initial_deposit),
                                          _nbDeposits(0),
                                          _nbWithdrawals(0)
{
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  this->_accountIndex = ++Account::_nbAccounts;
  Account::_totalAmount += this->_amount;
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

bool	Account::makeWithdrawal( int withdrawal )
{
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  std::cout << "index:" << this->_accountIndex << ';' << "p_amount:" << this->_amount << ';';
  std::cout << "withdrawal:";
  if (withdrawal > this->_amount)
  {
      std::cout << "refused" << std::endl;
      return (1);
  }
  else
  {
    std::cout << withdrawal << ';';
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    std::cout << "amount:" << this->_amount << ';' << "nb_withdrawals:";
  }
  if (withdrawal > 0)
  {
    std::cout << '1' << std::endl;
    Account::_totalNbWithdrawals++;
  }
  else
    std::cout << '0' << std::endl;
  return (0);
}


void	Account::makeDeposit( int deposit )
{
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  std::cout << "index:" << this->_accountIndex << ';' << "p_amount:" << this->_amount << ';';
  Account::_totalAmount += deposit;
  this->_amount += deposit;
  std::cout << "deposit:" << deposit << ';' << "amount:" << this->_amount << ';' << "nb_deposits:";
  if (deposit > 0)
  {
    std::cout << '1' << std::endl;
    Account::_totalNbDeposits++;
  }
  else
    std::cout << '0' << std::endl;
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
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  std::cout << "index:" << this->_accountIndex << ';'<< "amount:" << this->_amount << ';' << "deposits:" << this->_nbDeposits << ';' << "withdrawals:" <<  this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
  std::cout << "[";
  Account::_displayTimestamp();
  std::cout << "] ";
  std::cout << "accounts:" << Account::getNbAccounts() + 1 << ';'<< "total:" << Account::getTotalAmount() << ';' << "deposits:" << Account::getNbDeposits() << ';' <<  "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int		Account::checkAmount( void ) const
{
  return (this->_amount);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

int	Account::getNbDeposits( void )
{
  return (Account::_totalNbDeposits);
}

int	Account::getTotalAmount( void )
{
  return (Account::_totalAmount);
}

int	Account::getNbAccounts( void )
{
  return (Account::_nbAccounts);
}

int	Account::_nbAccounts = -1;
int	Account::_nbCheckAmount = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
