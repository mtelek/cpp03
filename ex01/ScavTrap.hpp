/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 15:15:10 by mtelek            #+#    #+#             */
/*   Updated: 2025/01/01 23:17:02 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	protected:
		static const int MaxHp = 100;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		
		int getMaxHp() const;
		void attack(const std::string &target);
		void guardGate();
};

#endif
