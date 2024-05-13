//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>
#include "adder.h"
using namespace std;
  
// Todo: A function should always be defined above the main function.

//void lifeUp(int life){
//    ++life;
//}

// call by reference - 2 ways

// First way
//void lifeUp(int *life){
//    ++*life;
//}

// Second way
void lifeUp(int &life){
    ++life;
}

// we can have same name for 2 different function
//int addme(int a, int b){
//    return a + b;
//}
//
//float addme(float a, float b){
//    return a + b;
//}


int main() {
    int life = 3;
//    lifeUp(life); // call by value
//    lifeUp(&life); // call by reference
    lifeUp(life); // call by reference

    cout << life << endl;
    
    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout << addme(v1, v2) << endl;
    cout << addme(v3, v4) << endl;

    return 0;
}


