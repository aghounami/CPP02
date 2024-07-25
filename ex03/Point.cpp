#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0){}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y){
    // std::cout << "Point created" << std::endl;
}

Point::Point(Point const &src) : x(src.x), y(src.y){
    std::cout << "copy constructor called" << std::endl;
}

Point::~Point(){}

Point &Point::operator=(Point const &rhs)
{
    std::cout << "ok " << std::endl;
    if (x != rhs.x)
        const_cast<Fixed &>(x) = rhs.x;
    if (y != rhs.y)
        const_cast<Fixed &>(y) = rhs.y;
    return *this;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
