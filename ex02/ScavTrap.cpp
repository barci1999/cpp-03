/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:44:10 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/14 18:41:57 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* como la clase scavtrap hereda los valores de claptrap llamamos a estos constructores
dentro de los nuevos y solo cambiamos la variables la cuales queremos modificar
de ahi que no se asigne el atributo name propiamente en los constructores de scavtrap */

ScavTrap::ScavTrap(/* args */) : ClapTrap()
{
	this->H_Points = 100;
	this->E_Points = 50;
	this->A_Points = 20;
	std::cout << GREEN <<"ScavTrap default constructor called" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->H_Points = 100;
	this->E_Points = 50;
	this->A_Points = 20;
	std::cout << GREEN <<"ScavTrap parametered constructor called" << RESET <<std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << GREEN <<"ScavTrap copy constructor called" << RESET <<std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << GREEN <<"ScavTrap copy assigment operator called." << RESET <<std::endl;
	ClapTrap::operator=(other);
	return(*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN <<"ScavTrap destructor called." << RESET <<std::endl;
}
void  ScavTrap::guardGate()
{
	std::cout << GREEN <<"Scavtrap " << this->name <<" is now in Gate keeper mode." << RESET <<std::endl;
}
