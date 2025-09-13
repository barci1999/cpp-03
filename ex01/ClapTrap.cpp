/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:44:49 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/13 16:33:32 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


/*Canonic Form*/

ClapTrap::ClapTrap()
{
	this->name = "NoName";
	this->H_Points = 10;
	this->E_Points = 10;
	this->A_Points = 0;
	std::cout << "Claptrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->H_Points = 10;
	this->E_Points = 10;
	this->A_Points = 0;
	std::cout << "Claptrap parametered constructor called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->A_Points = other.A_Points;
	this->E_Points = other.E_Points;
	this->H_Points = other.H_Points;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assigment operator called." << std::endl;
	if (this == &other)
	{
		return(*this);
	}
	this->name = other.name;
	this->A_Points = other.A_Points;
	this->E_Points = other.E_Points;
	this->H_Points = other.H_Points;
	return(*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called." << std::endl;
}
/* Methods */

void ClapTrap::attack(const std::string& target)
{
	if(this->H_Points <= 0 || this->E_Points <= 0)
	{
		std::cout << "ClapTrap " << this->name << "can not attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target
	<< " ,causing " << this->A_Points << " points of damage!" << std::endl;
	this->E_Points -= 1;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->H_Points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return;
	}
	std::cout << "Claptrap " << this->name << " receives " << amount << " points of damage!" << std::endl;
	this->H_Points -= amount;
	std::cout << "Claptrap " << this->name << " Actual Hit_points: " << this->H_Points << std::endl;
	if(this->H_Points <= 0) 
		std::cout << "Claptrap " << this->name << " died!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->E_Points > 0 && this->H_Points > 0)
	{
		this->E_Points -= 1;
		this->H_Points += amount;
		std::cout << "Claptrap " << this->name << " was rapaired " << amount << " Hit points!" << std::endl;
		std::cout << "Claptrap " << this->name << " Actual Hit points: " << this->H_Points << std::endl;
	}
	else
		std::cout << "Claptrap " << this->name << " It can't repair itself!"<< std::endl;
}

