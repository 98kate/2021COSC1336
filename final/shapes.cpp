#include <iostream>
#include "square.h"

int main()
{
    Square objSquare1 = Square();
    Square objSquare2 = Square(3.6);

    objSquare1.print();
    objSquare2.print();
    return 0;
}