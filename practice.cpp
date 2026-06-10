#include <iostream>
#include <string>


class Book{
protected:
    std::string author;
    std::string title;
    int isbn;
    bool isAvailable;

public:
    Book(const std::string& a,const std::string& t,int isbn,bool iA):author(a),title(t),isbn(isbn),isAvailable(iA){
        std::cout<<"Constructor of Book has been executed."<<std::endl;
    }
    virtual ~Book(){
        std::cout<<"Book "<<title<<" removed."<<std::endl;
    }
    virtual std::string getAuthor() const{
        return author;
    }
    virtual std::string const getTitle(){
        return title;
    }
    virtual std::string const getAuthor(){
        return author;
    }
    virtual int const getIsbn(){
        return isbn;
    }
    virtual bool borrow(){
        isAvailable=false;
        std::cout<<title<<" borrowed."<<std::endl;
    }
    virtual bool returnBook(){
        isAvailable=true;
        std::cout<<title<<" returned."<<std::endl;
    
    }
    virtual bool checkAvailable(){
        return isAvailable;
    }
};


class EBook:public Book{
private:
    double fileSize;
public:
    EBook(const std::string& a,const std::string& t,int isbn,bool iA,double fileSize):Book(a,t,isbn,iA),fileSize(fileSize){
        std::cout<<"Constructor of EBook bas been executed."<<std::endl;
    }
    bool borrow() override {
        isAvailable=false;
        std::cout<<title<<" downloaded."<<std::endl;
    }
    ~EBook(){
        std::cout<<"Destructor of EBook has been executed."<<std::endl;
    }
};




int main(){
    
    
    
    
    
    return 0;
}