#include <iostream>
#include "basic.h"
#include "pointers.h"
#include "datatypes.h"
using namespace std;

int main(int argc , char** argv){
    // Todo: User input from terminal.
    for(int i = 0 ; i < argc; i++){
        cout << argv[i] << endl;
    }

    //Todo: create a obj for basic file
    basic b_obj{};
    // everything should be in the same order as the header file
    b_obj.nothing();
//    b_obj.user_color();
//    b_obj.user_number();
//    b_obj.size_of_datatype();

    //Todo: create obj for pointer
    pointers p_obj{}; // create a object for class
    p_obj.pointer();
    p_obj.reference();
    p_obj.cpp_array();

    // Todo: Create obj for datatypes
    datatypes d_obj{};
    d_obj.ternary_operation();
    d_obj.switch_condition();
    d_obj.conditions();
    d_obj.auto_datatype();


    return 0;
}


