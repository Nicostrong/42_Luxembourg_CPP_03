/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:00 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/05/08 10:35:02 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main (void )
{
	std::cout << "Creating ClapTrap object..." << std::endl;
	ClapTrap clap("ClapTrap");

	std::cout << "\nCreating FragTrap object..." << std::endl;
	FragTrap frag("FragTrap");

	std::cout << "\nTesting FragTrap actions..." << std::endl;
	frag.attack("target");
	frag.takeDamage(30);
	frag.beRepaired(20);
	frag.highFivesGuys();

	std::cout << "\nCopying FragTrap object..." << std::endl;
	FragTrap copyFrag = frag;
	copyFrag.highFivesGuys();
	
	//	Test virtual keyword
	std::cout << "\nTest virtual keyword" << std::endl;
	ClapTrap*	clap2 = new ScavTrap("toto");
	clap2->attack("Nico");
	delete clap2;

	std::cout << "\nDestroying objects..." << std::endl;

	return (0);
}
