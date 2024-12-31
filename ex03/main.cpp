/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:45:33 by mtelek            #+#    #+#             */
/*   Updated: 2024/12/31 17:37:44 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Shiny");

	diamond.attack("Caleb");
	diamond.takeDamage(30);
	diamond.beRepaired(20);
	diamond.whoAmI();
	diamond.guardGate();
	diamond.highFivesGuys();

	return (0);
}

