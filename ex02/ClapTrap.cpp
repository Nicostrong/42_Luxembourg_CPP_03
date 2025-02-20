/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:09 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 11:02:55 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor
 */
ClapTrap::ClapTrap( void ) : 	_name("ClapTrap"), \
								_hitpoints(10), \
								_energyPoints(10), \
								_attackDamage(0)
{
	std::cout	<< "Default ClapTrap with name "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Constructor with name
 */
ClapTrap::ClapTrap( std::string name ) :	_name(name), \
											_hitpoints(10), \
											_energyPoints(10), \
											_attackDamage(0)
{
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Constructor with all argument
 */

ClapTrap::ClapTrap( std::string name, \
					int hitpoints, \
					int energyPoints, \
					int attackDamage ) :	_name(name), \
											_hitpoints(hitpoints), \
											_energyPoints(energyPoints), \
											_attackDamage(attackDamage)
{
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " is born with all parameters!"
				<< std::endl;
	return ;
}

/*
 *	Copy constructor
 */
ClapTrap::ClapTrap( const ClapTrap &src_object )
{
	*this = src_object;
	std::cout	<< "ClapTrap with name "
				<< src_object._name
				<< " is born by copy!"
				<< std::endl;
	return ;
}

/*
 *	Destructor
 */
ClapTrap::~ClapTrap( void )
{
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " is destroyed!"
				<< std::endl;
	return ;
}

/*
 *	Assignment operator overload
 */
ClapTrap	&ClapTrap::operator=( const ClapTrap &src_object )
{
	this->_name = src_object._name;
	this->_hitpoints = src_object._hitpoints;
	this->_energyPoints = src_object._energyPoints;
	this->_attackDamage = src_object._attackDamage;
	std::cout	<< "ClapTrap with name "
				<< src_object._name
				<< " is born by assignment!"
				<< std::endl;
	return (*this);
}

/*******************************************************************************
 *								GETTER										   *
 ******************************************************************************/

/*
 *	Return the private attribut _name
 */
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

/*
 *	Return the private attribut _hitpoints
 */
int			ClapTrap::getHitpoints( void ) const
{
	return (this->_hitpoints);
}

/*
 *	Return the private attribut _energyPoints
 */
int			ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

/*
 *	Return the private attribut _attackDamage
 */
int			ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Attack function check if the ClapTrap has enough energy to attack or is alive
 */
void		ClapTrap::attack( const std::string& target )
{
	if (this->_hitpoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout	<< "ClapTrap with name "
					<< this->_name
					<< " has no energy or is dead and can't attack!"
					<< std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " attacks "
				<< target
				<< ", causing "
				<< this->_attackDamage
				<< " points of damage!"
				<< std::endl;
	return ;
}

/*
 *	Take damage function
 */
void		ClapTrap::takeDamage( unsigned int amount )
{
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " takes "
				<< amount
				<< " points of damage!"
				<< std::endl;
	this->_hitpoints -= amount;
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " has "
				<< this->_hitpoints
				<< " hitpoints left!"
				<< std::endl;
	return ;
}

/*
 *	Be repaired function check if the ClapTrap is alive or have enough hitpoints
 *	to be repaired
 */
void		ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitpoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout	<< "ClapTrap with name "
					<< this->_name
					<< " has no energy or is dead and can't be repaired!"
					<< std::endl;
		return ;
	}
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " is repaired for "
				<< amount
				<< " hitpoints!"
				<< std::endl;
	this->_hitpoints += amount;
	this->_energyPoints--;
	std::cout	<< "ClapTrap with name "
				<< this->_name
				<< " has "
				<< this->_hitpoints
				<< " hitpoints left! Now has "
				<< this->_energyPoints
				<< " energy points left!"
				<< std::endl;
	return ;
}
