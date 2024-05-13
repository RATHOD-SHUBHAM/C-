
#include <iostream>
#include <string>
using namespace std;

class One{
public:
//    void intro(){
//        cout << "I am One\n";
//    }

    virtual void intro(){
        cout << "I am One\n";
    }
};

class Two: public One{
public:
    void intro(){
        cout << "I am Two\n";
    }
};

class Three: public One{
public:
    void intro(){
        cout << "I am Three\n";
    }
};



int main()
{
//    One a;
    One *a;
    Two b;
    Three c;

//    a.intro();
//    b.intro();
//    c.intro();
  
    a = &b;
    a->intro();
    
    
    a = &c;
    a->intro();

    return 0;
    
}
