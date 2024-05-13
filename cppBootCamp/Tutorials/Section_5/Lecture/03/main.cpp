// Todo:
//  1. Non constant object can access constant method but,
//  2. constant method (obj) cannot access non constant method.


#include <iostream>
#include <string>
using namespace std;

class User{

    int _secret = 22;
    
public:
    string name = "default";
    void classMessage();

    void setSecert(const int & newsecret){
        _secret = newsecret;
    }

    int getSecret()const;
    
};

// :: Scope resolution operator
void User::classMessage(){
    cout << "Class is great, " << name << endl;
    
}

int User::getSecret()const{
    return _secret;
    
}


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
    
    const User rock; // const obj accessing const method
    cout << rock.getSecret() << endl;
    
   
    return 0;
}
