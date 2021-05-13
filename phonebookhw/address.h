#include <string>
/*
header is an index or "table of contents"
*/

class Address //used as the "blueprint" of an object
{
    public: //accessible outside of the class
    Address(); //performs initialization
    ~Address(); //destroys or "cleans up" the class object when it passes out of scope or deleted
    void print(); //prints stuff
    std::string toString();
    void init(); //initialize the class itself. clear out the memory and all that

    //known as getters/setters "gets" the object, "sets" the object
    void setFirst(std::string pFirst); //going to assign a first name
    void setLast(std::string pLast);
    void setPhoneNumber(std::string pPhoneNumber);
    //getters take no parameters 
    std::string getFirst();
    std::string getLast();
    std::string getPhoneNumber();

    void input();
    void input2();
    private: //cannot be accessed or viewed from outside the class
    std::string First;
    std::string Last;
    std::string PhoneNumber;
};