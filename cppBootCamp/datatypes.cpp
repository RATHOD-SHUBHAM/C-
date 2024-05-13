//
// Created by SHUBHAM RATHOD on 5/11/24.
//

#include "datatypes.h"
#include <iostream>
#include <string>
using namespace std;

void datatypes::ternary_operation(){
    int match_point = 14;

    string result = match_point >= 14 ? "Game won" : "Game lost";

    cout << result<< endl;
}

void datatypes::switch_condition() {
    int rating = 4;

    switch(rating) {
        case 1:
            cout << "rating is 1" << endl;
            break;
        case 2:
            cout << "rating is 2" << endl;
            break;
        case 3:
            cout << "rating is 3" << endl;
            break;
        case 4:
            cout << "rating is 4" << endl;
            break;
        case 5:
            cout << "rating is 5" << endl;
            break;
        default:
            cout << "rating must be between 1 - 5" << endl;
            break;
    }
}


void datatypes::conditions(){
    int arr[] = {0,1, 2, 3, 4 , 5};

    int i = 5;

    do{
        cout << arr[i] << endl;
        i ++;
    } while (i < 6);

    cout << "Let's look at for loop" << endl;

    // Todo: size of array: https://www.w3schools.com/cpp/cpp_arrays_size.asp
    for(int i = 0; i < sizeof(arr)/sizeof(int) ; i ++){
        cout << arr[i] << endl;
    }

    cout << "Now we will look at for each loop" << endl;

    for(int  i : arr){
        cout << arr[i] << endl;
    }

    // usually when printing a string , there is a 0, that is added by compiler at the end
    char my_string[] = "Shubham";

    // This is what happens at the compiler level - each string is parsed and compiler would have added a zero in the end
    char my_name[] = {'s', 'h', 'u', 'b', 'h', 'a', 'm', 0};

    // So we ca write a short hand like this
    for(i=0; my_string[i] != 0; i++ ){
        cout << my_string[i] << endl;
    }

    cout << "Using Pointers" << endl;

    // using pointers
    for (char *cp = my_string; *cp != 0; *cp++){
        cout << *cp << endl;
    }

    cout <<'\n' << endl;

    // for each loop
    for(char i : my_string){
        cout << i << endl;
    }

    cout <<'\n' << endl;

    // but compiler will add a 0 - to avoid that we can add
    for(char i : my_string){
        if(i == 0){
            break;
        }
        cout << i << endl;
    }
}


string api_call() {
    return " got some data from the api call made to the web";
}

void datatypes::auto_datatype(){
    // places where we dont know what type of data will be returned and we have to decalre a variable we can use auto
    auto response = api_call(); // here we know that string is getting returned, but in real life it can be anything like a int , double etc

    cout << "API call value" << response;
}

