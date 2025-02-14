/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:48:04 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 17:52:52 by nfordoxc         ###   Luxembourg.lu     */
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

    std::cout << "\nDestroying objects..." << std::endl;
	return (0);
}