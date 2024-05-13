

#include <iostream>
#include <string>
using namespace std;

class User{
    int secret = 22;
    
public:
    string name = "default";
    void classMessage(){cout << "Class is great, " << name << endl;}
};


int main()
{
   
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.secret = 222;
    
    
    User hitesh;
    hitesh.classMessage();
    hitesh.name = "hitesh";
    hitesh.classMessage();
    
    
    return 0;
}
