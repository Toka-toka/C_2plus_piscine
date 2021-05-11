#include "Fixed.hpp"

// конструкторы 
Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called\n";
	this->_value = (value << 8);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called\n";
	this->_value = roundf(value * 256);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

// деструктор
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

// сеттер
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
}

// геттеры
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return(this->_value);
}

float Fixed::toFloat(void) const
{
	return((float)this->_value / (float)(256));
}

int Fixed::toInt(void) const
{
	return(this->_value >> 8);
}

// перегрузки
Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called\n";
	this->_value = copy._value;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	return (out << fixed.toFloat());
}