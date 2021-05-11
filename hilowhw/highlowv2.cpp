#include <iostream>
#include <string>

int main()
{
    int guessTries = 0;
    int Max = 100;
    int Min = 1;
    char Reply;
    bool guessT = true;
    
    std::cout << "Think of a number between 1 and 100. I'll try to guess what it is!" << std::endl;
    std::cout << "\n I will ask you some questions. Please respond y for yes, or n for no." << std::endl;

    

  while(Max != Min)
  {
    
    
        std::cout << "Is it less than " << (Max + Min + 1)/2 << std::endl;
        std::cin >> Reply;
        Reply = tolower(Reply);
             if(Reply == 'y')
                 {
                    Max = (Max + Min)/2;
                    guessTries++;
                 }
                else if (Reply == 'n')
                {
                     Min = (Max + Min + 1)/2;
                     guessTries++;
                }
            
  }
    std::cout << "Is your number: " << Min << "?" << std::endl;
}