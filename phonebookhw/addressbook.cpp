#include <iostream>
#include <vector>
#include <string>
#include "address.h"
//58 mins

int main()
{
    std::vector<Address> vtrAddress(2);
    Address objAddress = Address(); 
    Address objAddress2 = Address();

    vtrAddress.clear();

    objAddress.setFirst("Alice");
    objAddress.setLast("Glass");
    objAddress.setPhoneNumber("(666)-666-6666");

    vtrAddress.push_back(objAddress); //push elements into a vector from the back. new value is inserted into the vector at the end. size increases by 1

    objAddress2.setFirst("Henry");
    objAddress2.setLast("Rollins");
    objAddress2.setPhoneNumber("1(800)-RAGE");
    vtrAddress.push_back(objAddress2);

    objAddress = Address();
    objAddress.input();
    vtrAddress.push_back(objAddress);

    objAddress = Address();
    objAddress.input2();
    vtrAddress.push_back(objAddress);
    
    for(int Index = 0; Index < vtrAddress.size(); Index++)
    {
        vtrAddress.at(Index).print();
        std::cout << std::endl;
    }
     //break it down to the absolute simplest form to avoid being overwhelmed and build off of that
    return 0;
}