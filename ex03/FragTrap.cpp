/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:03:01 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 18:49:32 by pablalva         ###   ########.fr       */
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
void FragTrap::highFivesGuys()
{
	std::cout << YELLOW << "FragTrap " << this->name << " make a high five!" << RESET << std::endl;
}
