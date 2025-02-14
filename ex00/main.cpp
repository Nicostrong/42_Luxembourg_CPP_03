/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:00 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 15:59:59 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main (void )
{
	ClapTrap	clap1("Kevin");
	ClapTrap	clap2("Nico");

	std::cout	<< "\nInitial states:" << std::endl;
	std::cout	<< clap1.getName()
				<< " HP: " << clap1.getHitpoints()
				<< " Energy: " << clap1.getEnergyPoints()
				<< std::endl;
	std::cout	<< clap2.getName()
				<< " HP: " << clap2.getHitpoints()
				<< " Energy: " << clap2.getEnergyPoints()
				<< std::endl;

	clap1.attack("Kevin");
	clap2.takeDamage(5);
	clap2.beRepaired(3);

	for (int i = 0; i < 12; ++i)
		clap1.attack("Ghost");

	clap1.beRepaired(2);
	clap2.attack("Nico");
	clap1.takeDamage(10);
	clap1.beRepaired(5);

	std::cout << "\nFinal states:" << std::endl;
	std::cout	<< clap1.getName()
				<< " HP: " << clap1.getHitpoints()
				<< " Energy: " << clap1.getEnergyPoints()
				<< std::endl;
	std::cout	<< clap2.getName()
				<< " HP: " << clap2.getHitpoints()
				<< " Energy: " << clap2.getEnergyPoints()
				<< std::endl;

	return (0);
}