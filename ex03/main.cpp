/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 21:39:05 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/13 22:02:03 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "--- Creación de objetos ---" << std::endl;
    ClapTrap ct("CT");
    ScavTrap st("ST");
    FragTrap ft("FT");
    DiamondTrap dt("DT");

    std::cout << "\n--- Ataques ---" << std::endl;
    ct.attack("Target1");
    st.attack("Target2");
    ft.attack("Target3");
    dt.attack("Target4");

    std::cout << "\n--- Daño recibido ---" << std::endl;
    ct.takeDamage(5);
    st.takeDamage(10);
    ft.takeDamage(15);
    dt.takeDamage(20);

    std::cout << "\n--- Reparación ---" << std::endl;
    ct.beRepaired(3);
    st.beRepaired(5);
    ft.beRepaired(7);
    dt.beRepaired(10);

    std::cout << "\n--- Métodos especiales ---" << std::endl;
    st.guardGate();
    ft.highFivesGuys();
    dt.whoAmI();

    std::cout << "\n--- Fin del main ---" << std::endl;
    return 0;
}
