#include <string>
#include <iostream>
#include "address.h" //saying include the info/definitions from address.h
//this is like the dictionary to define the terms we initialized in the header file

Address::Address(){
    init(); //take the class, going to initialize it
}

Address::~Address(){
    setFirst("");
    setLast("");
    setPhoneNumber("");
}

void Address::print(){
    std::cout << toString();
}


std::string Address::toString()
{
    std::string strAddress = getFirst() + " " + getLast() + " " + getPhoneNumber();
    return strAddress;
}
/////////////voids dont return anything
void Address::init()
{ 
        //strfirst = ""; works but not the best method 
        setFirst("");
        setLast("");
        setPhoneNumber("(000) 000 0000");
}
void Address::setFirst(std::string pFirst)
{       //protecting class variables [private]
        if(pFirst.size() < 1) //lets us know its an empty string, character less than 1 = 0 input. gives us default msg
        { 
            pFirst = "Default";
        }
        First = pFirst;
}
void Address::setLast(std::string pLast){
        Last = pLast;
}
void Address::setPhoneNumber(std::string pPhoneNumber){
        PhoneNumber = pPhoneNumber;
}
//////////
std::string Address::getFirst(){
    return First;
}

std::string Address::getLast(){
    return Last;
}

std::string Address::getPhoneNumber(){
    return PhoneNumber;
}

void Address::input()
{   
    std::string TempVal = "";
    //don't need a new string var every time because it applies to all
    std::cout << "Enter the first name: ";
    std::cin >> TempVal;
    setFirst(TempVal); //this differentiates it, the setter

    std::cout << "Enter the last name: ";
    std::cin >> TempVal;
    setLast(TempVal);

    std::cout << "Enter the phone number (include hyphens, ex: 210-000-0000): ";
    std::cin >> TempVal;
    setPhoneNumber(TempVal);

    /*std::string Answer = "";
    std::cout << "Would you like to enter another one? Enter Y or N: " << std::endl;
    std::cin >> Answer;
    if ( Answer == "Y" )
    {
        std::cout << "Enter the first name: ";
        std::cin >> TempVal;
        setFirst(TempVal); //this differentiates it, the setter

        std::cout << "Enter the last name: ";
        std::cin >> TempVal;
        setLast(TempVal);

        std::cout << "Enter the phone number (include hyphens, ex: 210-000-0000): ";
        std::cin >> TempVal;
        setPhoneNumber(TempVal);*/
    }

void Address::input2()
{
    std::string Temp2 = "";
    std::string Answer2 = "";

    std::cout << "Would you like to enter another one? Enter Y or N: " << std::endl;
    std::cin >> Answer2;
   /* while(Answer2 != "N")
   // {
    //if ( Answer2 == "Y" )
   // {
        std::cout << "Enter the first name: ";
        std::cin >> Temp2;
        setFirst(Temp2); //this differentiates it, the setter

        std::cout << "Enter the last name: ";
        std::cin >> Temp2;
        setLast(Temp2);

        std::cout << "Enter the phone number (include hyphens, ex: 210-000-0000): ";
        std::cin >> Temp2;
        setPhoneNumber(Temp2);

        std::cout << "Would you like to enter another one? Enter Y or N: " << std::endl;
        std::cin >> Answer2;
    // fiddle with later}*/
}


