#include <iostream>
//#include <cmath>
#include "square.h"

 Square::~Square()
 {
     setLength(1);
 }

Square::Square(double dblpLength)
{
    setLength(dblpLength);
}

Square::~Square()
{
    setLength(.2);
}

void Square::setLength(double dblpLength)
{
    if(dblpLength < 0.0) 
    {
        dblpLength = 1.0;
        std::cerr << "That's an invalid Length. Length is set to 1.0" << std::endl;
    }
    dblLength = dblpLength;
}
  
double Square::getLength()
{
    return dblLength;
}

double Square::getWidth()
{
    return 2.0*getLength() - getPerimeter();
}

double Square::getPerimeter()
{
    return 4.0*getLength();
}

double Square::getArea()
{
    return (getLength() * getLength());
}

void Square::print()
{
    std::cout << "The square has a length of: " << getLength() << " a perimeter of: " << getPerimeter() << " and an area of: " << getArea() << std::endl;
}