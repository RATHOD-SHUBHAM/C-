

#include <iostream>
#include <string>
using namespace std;


// By default, the class will be private
class User{

    int _secret = 22; // private variable start with a _underscore
    
public:
    string name = "default";
    void classMessage(){
        cout << "Class is great, " << name << endl;
    }

    // Use getter and setter to access the private member of the class
    void setSecert(const int & newsecret){
        _secret = newsecret;
    }
    int getSecret(){
        return _secret;
    }
    
}; // class has a semi colan in the end


int main()
{
   
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecert(333);
    
    cout << sam.getSecret() << endl;
    
    
    
    User hitesh;
    hitesh.classMessage();
    hitesh.name = "hitesh";
    hitesh.classMessage();
    
    
    return 0;
}
