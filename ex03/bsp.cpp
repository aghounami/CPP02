// area = 1/2 * |(x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))|
#include "Point.hpp"
// #include <cmath>

float getarea(Point const a, Point const b, Point const c)
{
    return (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) \
            + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) \
            + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2;
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
    float area = getarea(a, b, c);
    std::cout << "Area: " << area << std::endl;
    float area1 = getarea(p, b, c);
    float area2 = getarea(a, p, c);
    float area3 = getarea(a, b, p);


    if ((area == area1 + area2 + area3) && (area1 >= 0 && area2 >= 0 && area3 >= 0))
        return true;
    return false;
}