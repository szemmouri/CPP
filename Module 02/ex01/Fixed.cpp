#include "Fixed.hpp"


Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &other)
		this->_raw = other._raw;

	return *this;

}

Fixed::Fixed(int const i) 
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw = i << _fractionalBits;  // * 256 

	// std::cout << this->_raw << std::endl; // 2560
}

Fixed::Fixed(float const f) 
{
	std::cout << "Float constructor called" << std::endl;

	this->_raw = roundf(f * (1 << _fractionalBits));

	// this->_raw = roundf(f * 256);

	//std::cout << f * (1 << _fractionalBits) << std::endl;

	// std::cout << this->_raw << std::endl;


	// std::cout << (1 << _fractionalBits) << std::endl; // 256

}

// converting FROM fixed-point TO IEEE 754 floating-point.
float Fixed::toFloat(void) const 
{
	// Convert by dividing by 2^fractionalBits
    return static_cast<float>(this->_raw) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const 
{
    return this->_raw >> _fractionalBits;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}


Fixed::~Fixed()	{ std::cout << "Destructor called" << std::endl; }


std::ostream& operator<<(std::ostream& out, Fixed const &f) {
	return out << f.toFloat();
}


/*

	Fixed Point :
		Fixed point is a representation method (or format) for storing and displaying numbers in computers.
		In fixed point representation, you decide in advance how many digits go before and after the decimal point, and it never changes.

	Why Use Fixed-Point?

		Problem: Computers are bad at handling decimal numbers accurately with normal floats

		float a = 0.1;
		float b = 0.2;
		float c = a + b;  // Should be 0.3, but often gives 0.30000000000000004

		=> Solution: Fixed point uses integers to represent decimals for perfect accuracy



	Constructor 1: Integer Input

		Fixed num(10); 
		What happens:
		10 × 256 = 2560
		Stores 2560 in _raw
		toInt() => 2560 >> 8 = 10
		toFloat() => 2560 / 256 = 10.0


	Constructor 2: Float Input

		Fixed num(42.42f);  // You want to represent 42.42
		42.42 × 256 = 10859.52
		Stores 10859 in _raw
		toInt() => 10859 >> 8 = 42 (drops the .42)
		toFloat() => 10859 / 256 = 42.421875 (very close to 42.42)


	How Numbers are Stored in Memory ?? 

		=> Example 1: Fixed(10) - Integer Constructor

			Input: 10
			Step 1: 10 × 256 = 2560
			Step 2: Store 2560 in _raw
			Memory: _raw = 2560 (binary: 00001010 00000000)


		=> Example 2: Fixed(42.42) - Float Constructor

			Input: 42.42 (decimal number)

			Step 1: 42.42 × 256 = 10859.52
			Step 2: Store 10859 in _raw

			Memory: _raw = 10859 (binary: 00101010 01101011)


		Fixed-point format with 8 fractional bits means:
			- The lower 8 bits represent the fractional part (after the decimal)
			- The upper bits represent the integer part (before the decimal)

*/

