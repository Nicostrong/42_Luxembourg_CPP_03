/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:13:16 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 17:58:41 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
 *	Default constructor
 */
DiamondTrap::DiamondTrap( void ) :	ClapTrap( "Default_clap_name" ), \
									ScavTrap(), \
									FragTrap()
{
	this->_name = "Default";
	this->_hitpoints = FragTrap::getHitpoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout	<< "Default DiamonTrap "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Constructor with name
 */
DiamondTrap::DiamondTrap( std::string name ) :	ClapTrap( name + "_clap_name"), \
												ScavTrap(), \
												FragTrap()
{
	this->_name = name;
	this->_hitpoints = FragTrap::getHitpoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout	<< "DiamonTrap with name "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Copy constructor
 */
DiamondTrap::DiamondTrap( const DiamondTrap &src_object ) :	ClapTrap(src_object), \
															ScavTrap(src_object), \
															FragTrap(src_object)
{
	*this = src_object;
	std::cout	<< "DiamonTrap "
				<< this->_name
				<< " is born by copy!"
				<< std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &src_object )
{
	if (this != &src_object)
	{
		ClapTrap::operator=(src_object);
		this->_name = src_object._name;
	}
	std::cout	<< "DiamonTrap "
				<< this->_name
				<< " is born by assignation!"
				<< std::endl;
	return (*this);
}

/*
 *	Destructor
 */
DiamondTrap::~DiamondTrap( void )
{
	std::cout	<< "DiamonTrap "
				<< this->_name
				<< " is destroyed!"
				<< std::endl;
	return ;
}

/*
 *	Member function
 */
void		DiamondTrap::whoAmI( void )
{
	std::cout	<< "I am "
				<< this->_name
				<< " and my ClapTrap name is "
				<< ClapTrap::getName()
				<< std::endl;
	return ;
}
