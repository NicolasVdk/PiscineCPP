#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( float const n );
		Fixed( Fixed const & src);
		Fixed( int const n);
		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int _fix;
		static const int _stat = 8;
};


std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif