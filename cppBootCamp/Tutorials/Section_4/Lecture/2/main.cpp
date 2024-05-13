#include <iostream>

using namespace std;
  
void lifeUp(int &life){
    ++life;
}

// Creating a new data type using template
template<typename T>

T addme(T a, T b){
    return a + b;
}

int main() {
    int life = 3;
    lifeUp(life);
    cout << life << endl;
    
    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;
    
    cout << addme(v3, v4) << endl;

    return 0;
}


