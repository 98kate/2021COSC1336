#ifndef SQUARE_H
#define SQUARE_H

class Square
{
    public:
    Square();
    Square(double dblpLength);
    ~Square();
    void setLength(double dblpLength);
    double getLength();
    double getWidth();
    double getPerimeter();
    double getArea();
    void print();

    private:
    double dblLength;
};

#endif