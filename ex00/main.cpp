/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablalva <pablalva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:44:46 by pablalva          #+#    #+#             */
/*   Updated: 2025/09/13 14:52:59 by pablalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main() {
    // Crear ClapTraps
    ClapTrap a;                 // Constructor por defecto
    ClapTrap b("Bob");          // Constructor con nombre
    ClapTrap c(b);              // Constructor de copia

    std::cout << "\n--- Ataques ---\n";
    a.attack("Target1");
    b.attack("Target2");

    std::cout << "\n--- Daño recibido ---\n";
    a.takeDamage(5);
    b.takeDamage(12);           // Provoca la muerte de b

    std::cout << "\n--- Reparación ---\n";
    a.beRepaired(3);
    b.beRepaired(5);            // No puede repararse, ya murió

    std::cout << "\n--- Asignación ---\n";
    c = a;                      // Operador de asignación
    c.attack("Target3");

    std::cout << "\n--- Fin del main ---\n";

    return 0;                    // Destructor se llamará automáticamente
}