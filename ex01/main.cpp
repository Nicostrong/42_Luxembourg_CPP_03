/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:00 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/05/08 10:28:16 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void )
{
	ClapTrap	clap1("Kevin");
	ScavTrap	scav1("Nico");

	std::cout	<< "\nInitial states:" << std::endl;
	std::cout	<< clap1.getName()
				<< " HP: " << clap1.getHitpoints()
				<< " Energy: " << clap1.getEnergyPoints()
				<< std::endl;
	std::cout	<< scav1.getName()
				<< " HP: " << scav1.getHitpoints()
				<< " Energy: " << scav1.getEnergyPoints()
				<< std::endl;

	clap1.attack("Kevin");
	scav1.takeDamage(20);
	scav1.beRepaired(10);

	for (int i = 0; i < 12; ++i)
		clap1.attack("Ghost");

	clap1.beRepaired(2);
	scav1.attack("Toto");
	clap1.takeDamage(10);
	clap1.beRepaired(5);
	scav1.guardGate();

	std::cout << "\nFinal states:" << std::endl;
	std::cout	<< clap1.getName()
				<< " HP: " << clap1.getHitpoints()
				<< " Energy: " << clap1.getEnergyPoints()
				<< std::endl;
	std::cout	<< scav1.getName()
				<< " HP: " << scav1.getHitpoints()
				<< " Energy: " << scav1.getEnergyPoints()
				<< std::endl;
	
	//	Test virtual keyword
	std::cout << "Test virtual keyword" << std::endl;
	ClapTrap	*clap = new ScavTrap("toto");
	clap->attack("Nico");
	delete clap;
	
	return (0);
}
