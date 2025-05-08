/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:48:04 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/05/08 10:37:59 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	std::cout << "Creating DiamondTrap object..." << std::endl;
    DiamondTrap diamond("Ruby");

    std::cout << "\nTesting DiamondTrap actions..." << std::endl;
    diamond.attack("enemy");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.whoAmI();

    std::cout << "\nCopying DiamondTrap object..." << std::endl;
    DiamondTrap copyDiamond = diamond;
    copyDiamond.whoAmI();

    //	Test virtual keyword
	std::cout << "\nTest virtual keyword" << std::endl;
	ClapTrap*	clap2 = new ScavTrap("toto");
	clap2->attack("Nico");
	delete clap2;
    
    std::cout << "\nDestroying objects..." << std::endl;
	return (0);
}
