// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //
class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); //fait
	static int	getTotalAmount( void ); //fait
	static int	getNbDeposits( void );//fait
	static int	getNbWithdrawals( void ); //fait
	static void	displayAccountsInfos( void ); //fait

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit ); //fait
	bool	makeWithdrawal( int withdrawal ); // fait
	int		checkAmount( void ) const;
	void	displayStatus( void ) const; //fait


private:

	static int	_nbAccounts;
	static int	_nbCheckAmount;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void ); //fait

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// My boss is a dick                                                          //
// ************************************************************************** //
