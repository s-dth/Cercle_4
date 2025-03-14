/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:46:14 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/17 16:42:20 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits++;
	std::cout << "nb_deposits" << this->_nbDeposits << std::endl;
	this->_totalAmount+= deposit;
	this->_totalNbDeposits++;
	if (this->_accountIndex == 7)
		std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (checkAmount() < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		if (this->_accountIndex == 7)
			std::cout << std::endl;
		return(0);
	}
	else
	{
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawals" << this->_nbWithdrawals << std::endl;
		this->_totalAmount-= withdrawal;
		this->_totalNbWithdrawals++;
		if (this->_accountIndex == 7)
			std::cout << std::endl;
		return (1);
	}
}

int		Account::checkAmount( void ) const
{
	return(_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount ;
	std::cout << ";desposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std:: endl;
	if (this->_accountIndex == 7)
		std::cout << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t;
	std::tm* now;
	
	t = std::time(0);
	now = std::localtime(&t);
	
	std::cout << "[" << 1900 + now->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + now->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << now->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_sec << "]";
}

Account::Account(int initial_deposit):_amount(initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount;" << this->_amount;
	std::cout << ";created" << std::endl;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	if (this->_accountIndex == 7)
		std::cout << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount;" << this->_amount;
	std::cout << ";closed" << std::endl;
	if (this->_accountIndex == 7)
		std::cout << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	int	NbAccounts;
	int	TotalAmount;
	int	NbDeposits;
	int	NbWithdrawals;

	NbAccounts = Account::getNbAccounts();
	TotalAmount = Account::getTotalAmount();
	NbDeposits = Account::getNbDeposits();
	NbWithdrawals = Account::getNbWithdrawals();
	_displayTimestamp();
	std::cout << " acounts:" << NbAccounts;
	std::cout << ";total:" << TotalAmount;
	std::cout << ";deposits:" << NbDeposits;
	std::cout << ";withdrawals:" << NbWithdrawals << std::endl;
}
