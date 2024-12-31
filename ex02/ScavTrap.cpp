/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:08:12 by mtelek            #+#    #+#             */
/*   Updated: 2024/12/31 16:16:47 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Constructor for " << _name << " called.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor for " << _name << " called.\n";
}

int ScavTrap::getMaxHp() const
{
	return (100);
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " cannot attack, because it has no hit points.\n";
	if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << " cannot attack, because it has no energy points.\n";
	if (_hitPoints == 0 || _energyPoints == 0)
		return ;
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
	std::cout << "Remaining energy points: " << _energyPoints << ".\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now guarding the gate. What a hero!\n";
}
