#include <iostream>
#include <string>


class Book{
private:
    std::string author;
    std::string title;
    int isbn;
    bool isAvailable;

    

public:
    Book(const std::string& a,const std::string& t,int isbn,bool iA):author(a),title(t),isbn(isbn),isAvailable(iA){
        std::cout<<"Constructor has been executed."<<std::endl;
    }
    virtual ~Book(){
        std::cout<<"Destructor has been executed."<<std::endl;
    }
};