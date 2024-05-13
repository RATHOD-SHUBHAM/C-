
#include <iostream>

struct User{
    const int id;
    int age;
    
    User() : id(001), age(22){} // constructor
    
};

int main() {
    using namespace std;

    //stack
    int score = 100;
    User mike;
    
    //heap
    int* heap_score = new int; // assigning new memory
    * heap_score = 200;
    
    User* nike = new User();
    
    
    delete heap_score;
    delete nike;
    
    return 0;
}


