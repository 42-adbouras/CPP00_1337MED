/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:03:33 by adbouras          #+#    #+#             */
/*   Updated: 2024/10/01 13:20:24 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int 	Account::_nbAccounts = 0;
int 	Account::_totalAmount = 0;
int 	Account::_totalNbDeposits = 0;
int 	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) { return (_nbAccounts); }
int		Account::getTotalAmount( void ) { return (_totalAmount); }
int		Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int		Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits() << ";withdrawals:"
				<< getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	std::cout	<< "index:" << _accountIndex << ";amount:"
				<< checkAmount() << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount();
	std::cout << ";closed" << std::endl;
	_nbAccounts--;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";p_amount:"
				<< checkAmount() << ";deposit:" << deposit;
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout	<< "index:" << _accountIndex << ";p_amount:" << checkAmount()
					<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount();
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout	<< ";withdrawal:" << withdrawal << ";amount:" << checkAmount()
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const { return (_amount); }

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";amount:" << checkAmount()
				<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	current;
	tm		*local;

	current	= time(NULL);
	local	= localtime(&current);
	std::cout	<< "[" << local->tm_year + 1900
				<< std::setw(2) << std::setfill('0') << local->tm_mon + 1
				<< std::setw(2) << std::setfill('0') << local->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << local->tm_hour
				<< std::setw(2) << std::setfill('0') << local->tm_min
				<< std::setw(2) << std::setfill('0') << local->tm_sec
				<< "] ";
}
