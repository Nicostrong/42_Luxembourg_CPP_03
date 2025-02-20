/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:02:08 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 11:17:04 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		/*	Canonical form	*/
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &src );
		virtual ~ScavTrap( void ) ;
		
		ScavTrap	&operator=( const ScavTrap &src_object );

		/*	Method	*/
		void		guardGate( void );
		
};

#endif