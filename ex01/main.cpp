/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:44:15 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/13 16:52:20 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int main()
{
    std::cout << "--- Creación de objetos ---" << std::endl;
    ClapTrap clap1;
    ClapTrap clap2("Bob");
    ScavTrap scav1;
    ScavTrap scav2("Alice");

    std::cout << "\n--- Ataques ---" << std::endl;
    clap1.attack("Target1");
    clap2.attack("Target2");
    scav1.attack("Target3");
    scav2.attack("Target4");

    std::cout << "\n--- Daño recibido ---" << std::endl;
    clap1.takeDamage(5);
    clap2.takeDamage(12);
    scav1.takeDamage(8);
    scav2.takeDamage(20);

    std::cout << "\n--- Reparación ---" << std::endl;
    clap1.beRepaired(3);
    clap2.beRepaired(5);
    scav1.beRepaired(7);
    scav2.beRepaired(10);

    std::cout << "\n--- Copia y asignación ---" << std::endl;
    ClapTrap clap3(clap1);        // copy constructor
    ClapTrap clap4;
    clap4 = clap2;                 // copy assignment

    ScavTrap scav3(scav1);         // copy constructor
    ScavTrap scav4;
    scav4 = scav2;                 // copy assignment

    std::cout << "\n--- Guard Gate ---" << std::endl;
    scav1.guardGate();
    scav2.guardGate();

    std::cout << "\n--- Fin del main ---" << std::endl;
    return 0;
}