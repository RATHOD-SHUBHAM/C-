//
//  main.cpp
//  get_started
//
//  Created by lco on 19/04/20.
//  Copyright © 2020 lco. All rights reserved.
//

#include <iostream>


void printval(int a){
    printf("Integer value is %d\n", a);
}

void printval(double a){
    printf("Double value is %f\n", a);
}

void printval(int * a){
    printf("Pointer value is %p\n", a);
}

int main()
{
    printval(nullptr);
    return 0;
}
