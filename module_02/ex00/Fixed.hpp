/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:37:36 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/24 17:37:38 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{

    public:

    Fixed( void );
    Fixed( const Fixed &fixed );
    ~Fixed( void );

    Fixed&  operator=( Fixed const & fixed );
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    
    private:

    int                 _n;
    static int const    _nBit = 8;

};

#endif