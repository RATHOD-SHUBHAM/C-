
//Todo: https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

// Todo: constructor will have exact same name as the class, will not have any data type.
public:
    Phone(); //default constructor
    Phone(const string & name, const string & os, const int & price); //parameter constructor
    Phone(const Phone &); // copy constructor

    string getName(){
        return _os;
    }

    ~Phone(); //destructor
};

// Default Constructor
Phone::Phone() : _name(), _os("Andy"), _price(){
    puts("Default constructor");
}

// Parameter Constructor
Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price){
    puts("this is parameter constructor");
}

// Copy Constructor
Phone::Phone(const Phone & values){
    puts("OVERWRITE copy constructor");
    _name = "new-"+values._name;
    _os = "skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str()); //.c_str() - c level program - as printf is c code
}


int main()
{
   
    Phone samsungA1; // Default Constructor
    cout << samsungA1.getName() << endl;
    
    Phone OnePlus8("OP8", "Android-Oxy", 799); // Parameter Constructor
    cout << OnePlus8.getName() << endl;
    
    
    Phone OnePlus8S = OnePlus8; // Copy Constructor
    cout << OnePlus8S.getName() << endl;
    
    return 0;
}
