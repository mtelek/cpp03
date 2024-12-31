/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 13:45:33 by mtelek            #+#    #+#             */
/*   Updated: 2024/12/31 16:45:23 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap stewie("stewie");

	stewie.attack("Marley");
	stewie.beRepaired(5);
	stewie.takeDamage(11);
	stewie.highFivesGuys();
	stewie.attack("Marley");

	return (0);
}
