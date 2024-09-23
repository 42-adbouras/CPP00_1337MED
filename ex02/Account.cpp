/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:03:33 by adbouras          #+#    #+#             */
/*   Updated: 2024/09/23 09:56:30 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) { return (_nbAccounts); }
int		Account::getTotalAmount( void ) { return (_totalAmount); }
int		Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int		Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "account:" << getNbAccounts() << ";total:" << getTotalAmount() 
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = getNbAccounts();
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	_nbAccounts--;
}

void	Account::makeDeposit( int deposit )
{
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "index" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:" << withdrawal <<";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const { return (_amount); }
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}