/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:02:18 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 18:06:15 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
 *	Default constructor
 */
ScavTrap::ScavTrap( void )
{
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout	<< "default ScavTrap "
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
    std::cout	<< "ScavTrap copy of "
				<< src._name
				<< " is created!"
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
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " is born by copy!"
				<< std::endl;
	return (*this);
}

/*
 *	Destructor
 */
ScavTrap::~ScavTrap( void )
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " is destroyed!"
				<< std::endl;
	return ;
}

/*
 *	Member function
 */
void	ScavTrap::guardGate( void )
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " has entered in Gate keeper mode!"
				<< std::endl;
	return ;
}
