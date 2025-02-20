/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:02:18 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 11:05:21 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor
 */
ScavTrap::ScavTrap( void )
{
	this->_name = "ScarvTrap";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout	<< "default ScavTrap with name"
				<< _name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Constructor with name
 */
ScavTrap::ScavTrap( std::string name )
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout	<< "ScavTrap with name"
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Constructor by copy
 */
ScavTrap::ScavTrap( const ScavTrap &src ) : ClapTrap(src)
{
    *this = src;
    std::cout	<< "ScavTrap with name"
				<< src._name
				<< " is created by copy!"
				<< std::endl;
	return ;
}

/*
 *	Destructor
 */
ScavTrap::~ScavTrap( void )
{
	std::cout	<< "ScavTrap with name"
				<< this->_name
				<< " is destroyed!"
				<< std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
ScavTrap	&ScavTrap::operator=( const ScavTrap &src_object )
{
	this->_name = src_object._name;
	this->_hitpoints = src_object._hitpoints;
	this->_energyPoints = src_object._energyPoints;
	this->_attackDamage = src_object._attackDamage;
	std::cout	<< "ScavTrap with name"
				<< this->_name
				<< " is born by assignment!"
				<< std::endl;
	return (*this);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Special Method of ScravTrap characyer : guard the gate
 */
void	ScavTrap::guardGate( void )
{
	std::cout	<< "ScavTrap with name "
				<< this->_name
				<< " has entered in Gate keeper mode!"
				<< std::endl;
	return ;
}
