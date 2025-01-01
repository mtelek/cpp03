/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:29:04 by mtelek            #+#    #+#             */
/*   Updated: 2025/01/01 23:03:53 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called.\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor for " <<_name << " called.\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor for " <<_name << " called.\n";
}

int FragTrap::getMaxHp() const
{
	return (100);
}

void FragTrap::highFivesGuys()
{
	std::cout << "Hypothetical high-five! It's gonna be legen---wait for it---dary!\n";
}