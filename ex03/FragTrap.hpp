/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:28:32 by nfordoxc          #+#    #+#             */
/*   Updated: 2025/02/20 11:15:00 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		/*	Canonical form	*/
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &src_object );
		virtual ~FragTrap( void );

		FragTrap	&operator=( const FragTrap &src_object );

		/*	Method	*/
		void		highFivesGuys( void );
		
};

#endif