/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:03:01 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/13 18:39:37 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->H_Points = 100;
	this->E_Points = 100;
	this->A_Points = 30;
	std::cout << YELLOW <<"FragTrap default constructor called" << RESET <<std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->H_Points = 100;
	this->E_Points = 100;
	this->A_Points = 30;
	std::cout << YELLOW << "FragTrap parameted constructor called" << RESET <<std::endl;
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << YELLOW << "FragTrap copy constructor called" << RESET << std::endl;
}
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << YELLOW << "FragTrap copy assigment operator called." << RESET << std::endl;
	ClapTrap::operator=(other);
	return(*this);
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap destructor called" << RESET << std::endl;
}
void FragTrap::attack(const std::string& target)
{
	if(this->H_Points <= 0 || this->E_Points <= 0)
	{
		std::cout << YELLOW <<"FragTrap " << this->name << " cannot attack!" << RESET << std::endl;
		return;
	}
	std::cout << YELLOW <<"Fragtrap " << this->name << " attacks " << target
	<< " ,causing " << this->A_Points << " points of damage!" << RESET <<std::endl;
	this->E_Points -= 1;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if(this->H_Points <= 0)
	{
		std::cout << YELLOW <<"Fragtrap " << this->name << " is already dead!" << RESET <<std::endl;
		return;
	}
	std::cout << YELLOW <<"Fragtrap " << this->name << " receives " << amount << " points of damage!" << RESET <<std::endl;
	this->H_Points -= amount;
	std::cout << YELLOW <<"Fragtrap " << this->name << " Actual Hit_points: " << this->H_Points << RESET <<std::endl;
	if(this->H_Points <= 0) 
		std::cout << YELLOW <<"Fragtrap " << this->name << " died!" << RESET <<std::endl;
}
void FragTrap::beRepaired(unsigned int amount)
{
	if(this->E_Points > 0 && this->H_Points > 0)
	{
		this->E_Points -= 1;
		this->H_Points += amount;
		std::cout << YELLOW <<"Fragtrap " << this->name << " was rapaired " << amount << " Hit points!" << RESET <<std::endl;
		std::cout << YELLOW <<"Fragtrap " << this->name << " Actual Hit points: " << this->H_Points << RESET <<std::endl;
	}
	else
		std::cout << YELLOW <<"Fragtrap " << this->name << " It can't repair itself!"<< RESET <<std::endl;
}
void FragTrap::highFivesGuys()
{
	std::cout << YELLOW << "FragTrap " << this->name << " make a high five!" << RESET << std::endl;
}
