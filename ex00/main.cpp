/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:45:33 by mtelek            #+#    #+#             */
/*   Updated: 2024/12/31 15:04:17 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("bob");
	ClapTrap stewie("stewie");

	bob.attack("Marley");
	bob.takeDamage(5);
	bob.beRepaired(3);
	bob.takeDamage(9);
	bob.attack("Marley");

	stewie.attack("Marley");
	stewie.beRepaired(5);
	stewie.takeDamage(11);
	stewie.attack("Marley");
	return (0);
}
