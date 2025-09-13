/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 20:15:29 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/13 21:49:35 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() , ScavTrap() , FragTrap()
{
	std::cout << BLUE << "DiamondTrap default constructor called" << RESET << std::endl;
	this->name = "NoName";
	this->clap_name = ClapTrap::name + "_clap_name";
	this->H_Points = FragTrap::H_Points;
	this->E_Points = ScavTrap::E_Points;
	this->A_Points = FragTrap::A_Points;
}
DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name),ScavTrap(name),FragTrap(name)
{
	std::cout << BLUE << "DiamondTrap parametered constructor called" << RESET << std::endl;
	this->name = name;
	this->clap_name = ClapTrap::name + "_clap_name";
	this->H_Points = FragTrap::H_Points;
	this->E_Points = ScavTrap::E_Points;
	this->A_Points = FragTrap::A_Points;
}
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << BLUE << "DiamondTrap copy constructor called" << RESET << std::endl;
	this->name = other.name;
	this->clap_name = other.name;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << BLUE <<"DiamondTrap copy assigment operator called." << RESET <<std::endl;
	if(this == &other)
		return(*this);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	this->clap_name = other.clap_name;
	return(*this);
	
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BLUE <<"DiamondTrap destructor called." << RESET <<std::endl;
}
void DiamondTrap::takeDamage(unsigned int amount)
{
	if(this->H_Points <= 0)
	{
		std::cout << BLUE <<"DiamondTrap " << this->name << " is already dead!" << RESET <<std::endl;
		return;
	}
	std::cout << BLUE <<"DiamondTrap " << this->name << " receives " << amount << " points of damage!" << RESET <<std::endl;
	this->H_Points -= amount;
	std::cout << BLUE <<"DiamondTrap " << this->name << " Actual Hit_points: " << this->H_Points << RESET <<std::endl;
	if(this->H_Points <= 0) 
		std::cout << BLUE <<"DiamondTrap " << this->name << " died!" << RESET <<std::endl;
}
void DiamondTrap::beRepaired(unsigned int amount)
{
	if(this->E_Points > 0 && this->H_Points > 0)
	{
		this->E_Points -= 1;
		this->H_Points += amount;
		std::cout << BLUE <<"DiamondTrap " << this->name << " was rapaired " << amount << " Hit points!" << RESET <<std::endl;
		std::cout << BLUE <<"DiamondTrap " << this->name << " Actual Hit points: " << this->H_Points << RESET <<std::endl;
	}
	else
		std::cout << BLUE <<"DiamondTrap " << this->name << " It can't repair itself!"<< RESET <<std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << BLUE << "DiamondTrap my proper name is " << this->name << " my clap_name is " << this->clap_name << RESET << std::endl;
}