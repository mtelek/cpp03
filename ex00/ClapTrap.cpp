/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:45:27 by mtelek            #+#    #+#             */
/*   Updated: 2025/01/01 23:20:37 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called.\n";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor for " << _name << " called.\n";
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor for " << _name << " called.\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called.\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called.\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

int ClapTrap::getMaxHp() const
{
	return (10);
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot attack, because it has no hit points.\n";
	if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot attack, because it has no energy points.\n";
	if (_hitPoints == 0 || _energyPoints == 0)
		return ;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
	std::cout << "Remaining energy points: " << _energyPoints << ".\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot take damage anymore, because it has no hit points.\n";
	if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot take damage anymore, because it has no energy points.\n";
	if (_hitPoints == 0 || _energyPoints == 0)
		return ;
	if (amount >= (unsigned int)_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes damage of " << amount << ", having " << _hitPoints << " hit points after the attack.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot be repaired anymore, because it has no hit points.\n";
	if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " cannot be repaired anymore, because it has no energy points.\n";
	if (_hitPoints == 0 || _energyPoints == 0)
		return ;
	if (_hitPoints == getMaxHp())
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired, because it has full hit points.\n";
		return;
	}
	if ((_hitPoints + amount) > (unsigned int)getMaxHp())
	{
		_hitPoints = getMaxHp();
		_energyPoints--;
	}
	else
	{
		_hitPoints = _hitPoints + amount;
		_energyPoints--;
	}
	std::cout << "ClapTrap " << _name << " heals on itself " << amount << ", having " << _hitPoints << " hit points after reparation.\n";
	std::cout << "Remaining energy points: " << _energyPoints << ".\n";
}
