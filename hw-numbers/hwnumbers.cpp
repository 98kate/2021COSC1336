#include <iostream>

int main()
{
    int fakeNum = 0;
    int numOne = 0;
    int numTwo = 0;
    int gcd;

    std::cout << "Hello. Can you do me a favor and enter two values?" << std::endl;
    std::cout << "Please enter the first number: " << std::endl;
    std::cin >> numOne;
    std::cout << "\nPlease enter the second number: " << std::endl;
    std::cin >> fakeNum;
    std::cout << "Ugh, I don't like that number. Enter a different one: " << std::endl;
    std::cin >> numTwo; 

    while (fakeNum == numTwo)
    {
         std::cout << "I said I didn't like that number >:(" << std::endl;
         std::cout << "Try again, asshole: " << std::endl;
         std::cin >> numTwo;
    }

    if (numOne > numTwo)
   {
    std::cout << "The smallest number of the two is: " << numTwo << " The largest is: " << numOne << std::endl;
    std::cout << numOne << " + " << numTwo << " = " << numOne+numTwo << std::endl;
    std::cout << numOne << " - " << numTwo << " = " << numOne-numTwo << std::endl;
    std::cout << numOne << " * " << numTwo << " = " << numOne*numTwo << std::endl;
    //calculates the gcd vvv
        for (int i = 1; i <= numOne && i <= numTwo; i++ )
        {
           if (numOne % i == 0 && numTwo % i == 0)
           {
             gcd = i;
           }
        }
        std::cout << "The ratio of " << numOne << " and " << numTwo << " is " << numOne/gcd << ":" << numTwo/gcd << std::endl;
  }
  else
   {
    std::cout << "The smallest number of the two is: " << numOne << " The largest is: " << numTwo << std::endl;
    std::cout << numOne << " + " << numOne << " = " << numTwo+numOne << std::endl;
    std::cout << numOne << " - " << numOne << " = " << numTwo-numOne << std::endl;
    std::cout << numOne << " * " << numOne << " = " << numTwo*numOne << std::endl;
      for (int i = 1; i <= numOne && i <= numTwo; i++ )
        {
           if (numOne % i == 0 && numTwo % i == 0)
           {
             gcd = i;
           }
        }
        std::cout << "The ratio of " << numTwo << " and " << numOne << " is " << numTwo/gcd << ":" << numOne/gcd << std::endl;
   }
}