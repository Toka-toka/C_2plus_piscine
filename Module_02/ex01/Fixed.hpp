#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		static const int _fractional_bits = 8;
		int _value;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(const Fixed &copy);
		~Fixed();

		void setRawBits( int const raw );

		int getRawBits() const;
		float toFloat(void) const;
		int toInt(void) const;

		Fixed &operator=(const Fixed &copy);
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif
