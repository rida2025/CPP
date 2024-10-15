/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:50:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/02 18:10:35 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


Account::Account()
{
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void)
{
     _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "closed" << std::endl;
    this->_nbAccounts--;
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
    return (_totalAmount);
}

int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
    << "total:" << getTotalAmount() << ";"
    << "deposits:" << getNbDeposits() << ";"
    << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ){
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << checkAmount() << ";"
    << "deposit:" << deposit << ";"
    << "amount:" << checkAmount()+deposit << ";"
    << "nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "p_amount:" << checkAmount() << ";";
    if (_amount >= withdrawal)
    {
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";"
        << "amount:" << checkAmount()+withdrawal << ";"
        << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;;
        return (true);
    }
    else
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
}

int		Account::checkAmount( void ) const{
    return (_amount);
}

void	Account::displayStatus( void ) const{
     _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
    << "amount:" << checkAmount() << ";"
    << "deposits:" << _nbDeposits << ";"
    << "withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::_displayTimestamp( void ){
    std::time_t result = std::time(NULL);

    std::cout << std::setfill('0') <<"[" << 1900 + std::localtime(&result)->tm_year
    << std::setw(2) << 1 + std::localtime(&result)->tm_mon
    <<  std::setw(2) << std::localtime(&result)->tm_mday
    <<  "_"
    <<  std::setw(2) << std::localtime(&result)->tm_hour
    <<  std::setw(2) << std::localtime(&result)->tm_min
    <<  std::setw(2) << std::localtime(&result)->tm_sec 
    << "] " << std::flush;
}
