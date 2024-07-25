#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value)
{
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int value) {
  this->value = value << fractionalBits;
}

Fixed::Fixed(const float value) {
  this->value = roundf(value * (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->value >> fractionalBits);
}

float Fixed::toFloat(void) const {
  return ((float)this->value / (1 << fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->value = fixed.value;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
  out << fixed.toFloat();
  return out;
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed result(this->toFloat() * fixed.toFloat());
    return result;
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed result(this->toFloat() / fixed.toFloat());
    return result;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed result(this->toFloat() + fixed.toFloat());
    return result;
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed result(this->toFloat() - fixed.toFloat());
    return result;
}

bool Fixed::operator>(const Fixed &fixed) const{
    return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const{
    return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const{
    return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const{
    return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const{
    return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const{
    return (this->toFloat() != fixed.toFloat());
}

Fixed &Fixed::operator++(void)
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
