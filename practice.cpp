#include <iostream>
#include <string>


class Animal{
private:
    std::string name;
    std::string var;
    int amount;
public:
    Animal(std::string name,std::string var,int amount):name(name),var(var),amount(amount){
        std::cout<<"Initialized."<<std::endl;
    }
    virtual ~Animal(){
        
    }
};