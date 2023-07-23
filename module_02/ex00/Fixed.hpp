

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{

    public:

    Fixed( void );
    Fixed( Fixed const *fixed );
    ~Fixed( void );

    Fixed&  operator=( Fixed fixed );
    int     getRawBits( void );
    void    setRawBits( int const raw );
    
    private:

    int                 _n;
    static int const    _nBit;

};

#endif