#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"


class Point {
    private:
        Fixed const x;
        Fixed const y;

    public:
        Point();
        Point(Fixed const x, Fixed const y);
        Point(Point const &src);
        ~Point();

        Point &operator=(Point const &rhs);

        Fixed getX() const;
        Fixed getY() const;
};

// int distance(Point const &a, Point const &b);
// int distance(Point const &a, Point const &b, Point const &c);
// int area(Point const &a, Point const &b, Point const &c);
bool bsp(Point const a, Point const b, Point const c, Point const p);


#endif