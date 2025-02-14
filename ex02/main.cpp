/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:00 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 17:01:31 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

	std::cout << "\nDestroying objects..." << std::endl;

	return (0);
}