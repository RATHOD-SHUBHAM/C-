// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
    Phone(); //default constructor should always be private

public:
   
    Phone(const string & name, const string & os, const int & price); //parameter constructor
    Phone(const Phone &); // copy constructor
    string getName(){return _os;}
    ~Phone(); //destructor
};

Phone::Phone() : _name(), _os("Andy"), _price(){
    puts("Default constructor");
}

Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("this is parameter constructor");
}

Phone::Phone(const Phone & values){
    puts("OVERWRITE copy constructor");
    _name = "new-"+values._name;
    _os = "skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str());
}


int main()
{
   
//    Phone samsungA1;
//    cout << samsungA1.getName() << endl;
    
    Phone OnePlus8("OP8", "Android-Oxy", 799);
    cout << OnePlus8.getName() << endl;
    
    
    Phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getName() << endl;
    
    return 0;
}
