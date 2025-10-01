/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:44:12 by pablalva          #+#    #+#             */
/*   Updated: 2025/10/01 13:18:28 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include<iostream>
# include<string>
# include "ClapTrap.hpp"
	
class ScavTrap : public ClapTrap
{
public:
	ScavTrap(/* args */);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};

#endif


