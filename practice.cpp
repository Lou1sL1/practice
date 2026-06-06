#include <iostream>
#include <string>


class Animal{
private:
    std::string name;
    std::string var;
    int amount;
public:
    Animal(std::string name,std::string var,int amount):name(name),var(var),amount(amount){
        std::cout<<"Constructor has been done."<<std::endl;
    }
    virtual ~Animal(){
        std::cout<<"Destructor has been done."<<std::endl;
    }
};