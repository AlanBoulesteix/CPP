

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