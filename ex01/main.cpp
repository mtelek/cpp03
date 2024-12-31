/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:45:33 by mtelek            #+#    #+#             */
/*   Updated: 2024/12/31 16:45:28 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap stewie("stewie");

	stewie.attack("Marley");
	stewie.beRepaired(5);
	stewie.takeDamage(11);
	stewie.guardGate();
	stewie.attack("Marley");

	return (0);
}
