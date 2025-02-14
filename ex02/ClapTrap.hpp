/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:56:20 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/14 17:05:35 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
	
	public:

		//	Canonical form
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( std::string name, int hitpoints, int energyPoints, int attackDamage );
		ClapTrap( const ClapTrap &src );
		~ClapTrap( void );
		
		ClapTrap	&operator=( const ClapTrap &src_object );

		//	Getters
		std::string	getName( void ) const;
		int			getHitpoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;

		//	Member functions
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

};

#endif