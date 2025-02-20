/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:02:18 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 10:54:24 by nfordoxc         ###   Luxembourg.lu     */
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
	this->_name = "ScavTrap";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout	<< "Default ScavTrap with name "
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
	std::cout	<< "ScavTrap with name "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Destructor
 */
ScavTrap::~ScavTrap( void )
{
	std::cout	<< "ScavTrap with name "
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
	std::cout	<< "ScavTrap with name "
				<< this->_name
				<< " is born by copy!"
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
