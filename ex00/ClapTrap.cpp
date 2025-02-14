/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:09 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 17:11:08 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
 *	Default constructor
 */
ClapTrap::ClapTrap( void ) : 	_name("ClapTrap"), \
								_hitpoints(10), \
								_energyPoints(10), \
								_attackDamage(0)
{
	std::cout	<< "Default ClapTrap "
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
 *	Copy constructor
 */
ClapTrap::ClapTrap( const ClapTrap &src_object )
{
	*this = src_object;
	std::cout	<< "ClapTrap"
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
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " is destroyed!"
				<< std::endl;
	return ;
}

/*
 *	Assignment operator overload
 */
ClapTrap	&ClapTrap::operator=( const ClapTrap &src )
{
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

/******************************************************************************
 *							MEMBERS FUNCTIONS								  *
 ******************************************************************************/

/*
 *	Attack function check if the ClapTrap has enough energy to attack or is alive
 */
void	ClapTrap::attack( const std::string& target )
{
	if (this->_hitpoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " has no energy or is dead and can't attack!"
					<< std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout	<< "ClapTrap "
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
void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " takes "
				<< amount
				<< " points of damage!"
				<< std::endl;
	this->_hitpoints -= amount;
	std::cout	<< "ClapTrap "
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
void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitpoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout	<< "ClapTrap "
					<< this->_name
					<< " has no energy or is dead and can't be repaired!"
					<< std::endl;
		return ;
	}
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " is repaired for "
				<< amount
				<< " hitpoints!"
				<< std::endl;
	this->_hitpoints += amount;
	this->_energyPoints--;
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " has "
				<< this->_hitpoints
				<< " hitpoints left! Now has "
				<< this->_energyPoints
				<< " energy points left!"
				<< std::endl;
	return ;
}

/******************************************************************************
 *								Getters										  *
 ******************************************************************************/
std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

int			ClapTrap::getHitpoints( void ) const
{
	return (this->_hitpoints);
}

int			ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage( void ) const
{
	return (this->_attackDamage);
}
