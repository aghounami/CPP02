#include "Point.hpp"
// #include "bsp.hpp"
#include <iostream>

int main() {

    Point a(Fixed(15), Fixed(20));
    Point b;

    b = a;
    Point c(a);
    // Point a(Fixed(15), Fixed(20));
    // Point b(Fixed(10), Fixed(10));
    // Point c(Fixed(20), Fixed(10));

    // Point p1(Fixed(15), Fixed(15));
    // Point p2(Fixed(5), Fixed(5));

    // if (bsp(a, b, c, p1))
    //     std::cout << "Point p1 is inside the triangle abc" << std::endl;
    // else
    //     std::cout << "Point p1 is outside the triangle abc" << std::endl;
    // if (bsp(a, b, c, p2))
    //     std::cout << "Point p2 is inside the triangle abc" << std::endl;
    // else
    //     std::cout << "Point p2 is outside the triangle abc" << std::endl;

    return 0;
}