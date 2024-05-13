//
// Created by SHUBHAM RATHOD on 4/30/24.
//

#include "basic.h"
#include <iostream>
#include<string>


using namespace std;

void basic::nothing(){
    cout << "Hello Nothing" << endl;
}

void basic::user_color(){
    string user_color;
    cout << "Enter your favourite color: " ;
//    cin >>  user_color;
    getline(cin, user_color);
    cout << "Your favourite color is : " << user_color << endl;
}

int basic::user_number(){
    int user_num;
    cout << "Enter your favourite number : ";
    cin >> user_num;
    printf("Your favourite number is : %d", user_num);
    return 0;
}

// main function cannot be void in c++
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    nothing();
//    user_color();
//
//    return 0; // compulsory: successful execution
//}

//void size_of_datatype(){
//    printf("size of the datatype is %lu bits", sizeof(int) * 8);
//    printf("size of the datatype is %lu bits", sizeof(short int) * 8);
//    printf("size of the datatype is %lu bits", sizeof(long) * 8);
//    printf("size of the datatype is %lu bits", sizeof(long long int) * 8);
//}
