#include <iostream>
using namespace std;

// this is like a blueprint
struct User{
    const int uId;
    const char *name; // here pointer is constant and not the value
    const char *email;
    int course_count;
}; // don't forget the semicolan here

int main() {
    

    User mickey = {001, "mickey", "mickey@cartoon.com", 2};
    User donald = {002, "donald", "donald@cartoon.com", 3};

    // access struct using . operator
    cout << donald.email << endl;
    donald.course_count = 4;
//    donald.uId = 221; // cannot change the value
    
    donald.email = "ddonaldy@toon.com";
    
    cout << donald.email << endl;

    User * d = &donald; // user is a datatype of type struct
    
    // accessing struct using this ->
    d->course_count = 12;
    cout << donald.course_count << endl;
    
    return 0;
}


