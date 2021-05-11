#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		static const int _fractional_bits = 8;
		int _value;
	public:
		Fixed();
		~Fixed();
		int getRawBits() const;
		void setRawBits( int const raw );
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
};
#endif
