//
// Created by SHUBHAM RATHOD on 4/30/24.
//

#include "pointers.h"
#include <iostream>
#include <string>
using namespace std;

void pointers::pointer() {

    int age = 24;
    int cur_age = age;

    printf("My current age is : %d\n", cur_age);

    //Todo: Initialize the pointer
    int *my_pointer; // integer pointer
    my_pointer = &cur_age; // my pointer will point the address of cur_age

    printf("Address of current age is : %p\n", my_pointer);

    //Todo: Pointer de-referencing
    int my_pointer_value = *my_pointer; // Provide the value at that particular address
    printf("my pointer value is : %d\n", my_pointer_value);

}

// pointer will point to the memory address, whereas the reference will refer to the value at that address
// so if we change the reference value, then the actual value will also change
void pointers ::reference() {

    int score = 200;
    int *score_pointer = &score; // pointer accessing the address of score

    printf("My score is : %d\n", score);
    printf("My score address is : %p\n", score_pointer);

    // Todo: referncing the actual value
    int &reference_score = score;
    reference_score = 1000; // changes the score value

    printf("My score is : %d\n", score);
    printf("My score address is : %p\n", score_pointer);

}

void pointers ::cpp_array() {
    // array is nothing but continuous memory allocation
    int interger_array[5] = {0,1,2,3,4};

    cout << "Address of the array is: " << interger_array << endl;

    int another_array[5];
    cout << "The first value will be address: " << another_array[0] << endl;
    cout << "The default value in the array will be: " << another_array[4] << endl;
    cout << "This will provide the address: " << *another_array << endl;

    // if we don't initialize anything in c++ array, then the first value in the array will be the address
    // this is same as accessing the address using the pointer
    // So we can override the first value by assigning value to the pointer

    *another_array = 50;

    cout << "The over rided value is : " << another_array[0] << endl;
    cout << "This will provide the value at first address location of the array: " << *another_array << endl;

    another_array[1] = 15;
    int *ap = another_array;
    ap++; // move to the second pointer location
    *ap = 20; // update the value
    cout << "This will provide the value at second address location of the array: " << another_array[1] << endl;


}