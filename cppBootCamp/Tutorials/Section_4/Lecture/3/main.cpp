#include <iostream>

using namespace std;
  
int getTwo(){
    return 2;
}

void intersting(){
    puts("I am interesting");
}

int main() {
    int whatIgot = getTwo();
    
    //Todo: Functional pointer
    void (*pointsToInteresting)() = intersting; // () we dont want to run interesting  - just pointing to that address
    
    cout << whatIgot << endl;
    // two ways to run the functional pointer
    pointsToInteresting();
    (*pointsToInteresting)();
    return 0;
}


