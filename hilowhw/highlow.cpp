#include <iostream>
#include <string>

int main()
{
    //int guessTries = 0;
    int Max = 100;
    int Min = 1;
   // int yourNumber;
    char Reply;
    //bool guessT = true;
    
    std::cout << "\n I will ask you some questions. Please respond y for yes, or n for no." << std::endl;
    //std::cout << "\n But first, enter a number. Don't worry, I'm not looking.." << std::endl;
    //std::cin >> yourNumber;

    

  while(Max != Min)
    {
            std::cout << "Is it less than " << (Max + Min + 1)/2 << std::endl;
            std::cin >> Reply;
            Reply = tolower(Reply);

             

            if(Reply == 'y')
            {
                 Max = (Max + Min)/2;
                 /*if (Max == yourNumber)
                   {
                     std::cout << "Is it " << Max << std::endl;
                     break;
                   }*/
            } //y
            else if (Reply == 'n' )
            {
                 Min = (Max + Min + 1)/2;
                /* if (Min == yourNumber)
                   {
                     std::cout << "Is it " << Min << std::endl;
                     break;
                   }*/
            } //n
            else
            {
              std::cout << "What? I said put y or n." << std::endl;
            }

          } //while
          std::cout << "Are you thinking of " << Min << "?" << std::endl;
}