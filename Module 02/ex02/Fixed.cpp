#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed::Fixed(const int n) {
	this->_value = n << fractionalBits;
}

Fixed::Fixed(const float f) {
	this->_value = roundf(f * (1 << fractionalBits));
}


Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->_value = other.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const 
{
    return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other)
{
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other)
{
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other)
{
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other)
{
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other)
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	operator--();
	return tmp;
}

int Fixed::getRawBits(void) const {
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}


float	Fixed::toFloat() const {
	return (float)this->_value / (float)(1 << fractionalBits);
}

int		Fixed::toInt() const {
	return this->_value >> fractionalBits;
};

Fixed &	Fixed::min(Fixed &a, Fixed &b) 
{
	return (a < b) ? a : b;
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b) 
{
	return (a < b) ? a : b;
}

Fixed &	Fixed::max(Fixed &a, Fixed &b) 
{
	return (a > b) ? a : b;
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b) 
{
	return (a > b) ? a : b;
}

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym) {
	o << rSym.toFloat();
	return o;
}