/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:28:22 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 11:14:31 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*******************************************************************************
 *							CANONICAL FORM									   *
 ******************************************************************************/

/*
 *	Default constructor
 */
FragTrap::FragTrap( void ) : ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout	<< "Default FragTrap with name "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

/*
 *	Constructor with name
 */
FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout	<< "FragTrap with name "
				<< this->_name
				<< " is born!"
				<< std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap &src_object ) : ClapTrap(src_object)
{
	std::cout	<< "FragTrap with name "
				<< this->_name
				<< " is born by copy!"
				<< std::endl;
	return ;
}

/*
 *	Destructor
 */
FragTrap::~FragTrap( void )
{
	std::cout	<< "FragTrap with name "
				<< this->_name
				<< " is destroyed!"
				<< std::endl;
	return ;
}

/*
 *	Assignation operator overload
 */
FragTrap	&FragTrap::operator=( const FragTrap &src_object )
{
	if (this != &src_object)
		ClapTrap::operator=(src_object);
	std::cout	<< "FragTrap with name "
				<< this->_name
				<< " is born by assignation!"
				<< std::endl;
	return (*this);
}

/*******************************************************************************
 *								METHOD 										   *
 ******************************************************************************/

/*
 *	Member function
 */
void	FragTrap::highFivesGuys( void )
{
	if (this->_energyPoints <= 0)
	{
		std::cout	<< "FragTrap with name "
					<< this->_name
					<< " has no energy and can't make a high five!"
					<< std::endl;
		return ;
	}
	std::cout	<< "FragTrap with name "
				<< this->_name
				<< " request a high five guys!"
				<< std::endl;
	return ;
}
