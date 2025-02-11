/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:51:07 by ewu               #+#    #+#             */
/*   Updated: 2025/02/11 11:06:21 by ewu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>

/*static attributes are shared through all instances*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*constructor is init data for ONE INSTANCE
update static member to reflect new account*/
Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
//template: index:7;amount:16576;created
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

//destruct and -- nbaccount
Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount = _totalAmount - _amount;
//template: index:7;amount:8942;closed
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

//template: [19920104_091532](yyyymmdd_hhmmss)
void Account::_displayTimestamp()
{
	//get cur time
	std::time_t now = std::time(nullptr);
	std::tm *curTime = std::localtime(&now);
	std::cout << "[" << std::put_time(curTime, "%Y%m%d_%H%M%S")
				<< "] ";
	
}

//add deposit to account
//temp: index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
//tmp: index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
//index:0;p_amount:47;withdrawal:refused
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << "amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount() const
{
	return _amount;
}

//index:1;amount:785;deposits:1;withdrawals:1
void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" 
				<< _amount << ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

//static method (for all instances)

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}
//tmp: accounts:8;total:21524;deposits:8;withdrawals:0
//accounts:8;total:12442;deposits:8;withdrawals:6
void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:"
				<< _totalAmount << ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

/** my tester
 *#include "Account.hpp"

int main()
{
    Account acc1(100);    // Create account with 100
    Account acc2(50);     // Create account with 50
    
    Account::displayAccountsInfos();  // Shows total of 150 in 2 accounts
    
    acc1.makeDeposit(20);  // Deposit 20 to first account
    acc2.makeWithdrawal(30);  // Withdraw 30 from second account
    
    acc1.displayStatus();  // Shows status of first account
    Account::displayAccountsInfos();  // Shows updated totals
    
    return 0;
}
 */