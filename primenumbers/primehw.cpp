#include <iostream>

int main()
{
    int i = 0; 
    int j = 0;
    //2 because prime is > 1, only divisible by 1 and itself. 2 is already lowest prime number
    for (i = 2; i <=10000; i++) 
    {           //limit is 10k
        for (j=2; j<=i; j++) //checking 2 to whatever value i is
        {
            /* going to check whether i is divisible by j. */
            if(i%j==0) // remainder > 0 means its prime, if == 0 then not prime
            {
                break; //gets out of j
                
            }
           
        }

         if (i == j) //ignore my little notes for understanding the math..prime number is divisible by itself & 1. ex: i = 9, j = 9.
            {
                std::cout << i << std::endl;
            }
    }
    return 0;
}