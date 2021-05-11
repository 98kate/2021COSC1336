#include <iostream>
/*
remember to take it a step at a time
figure out the mathematical equations 
don't overthink the problem
*/
void printTree(int pHeight) //p is put to understand its a parameter = passed in
{
    int numofStars = 1;

    for (int Rows = 1; Rows < pHeight; Rows++) //# of rows
    {
        for(int Space = (pHeight - Rows); Space > 0; Space--) //spacing out the stars so it aligns nicely
        {
            std::cout << " ";
        }
        //
        for (int Stars = 1; Stars <= numofStars; Stars++) //prints the stars 
        {
            std:: cout << "*";
        }
        std::cout << std::endl;
        numofStars+=2;
    }

    for(int Space = (pHeight - 1); Space > 0; Space--) //going in reverse 
    {
        std::cout << " ";
    }
    std:: cout << "*" << std::endl;
} //our whole mathematical mess is contained in this parameter


int main() //prints our mess
{
    int Line = 5;
    std::cout << std::endl;
    printTree(Line); //passing control to void printTree to do what process it has 
    std::cout << std::endl;
    return 0;
}

/*
here lies my own basic version that I wanted to attempt

    int Row, Space, Star;

   
    for (Row = 1; Row <= 4; Row++) //number of rows
    {
        std::cout << "\n"; //indent new row
        for(Space = 3; Space >= Row; Space--)//print no. of spaces
        {
            std::cout << " ";
        }
        for(Star = 1; Star <= (2*Row-1); Star++) //print the symbol
        {
            std::cout << "*";
        }
    }
    std::cout << "\n   ";
    std::cout << "*";

     //stump. this is completely unnecessary. i love being stewpid!!!!!!!!!!!!!!!!!!!!
     /*
        for ( int Stump = 4; Stump > 3; Stump-- )
        {
            std::cout << "\n    ";
        }
         std::cout << "*";  begone stump ! 
*/