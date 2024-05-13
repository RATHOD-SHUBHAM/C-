#include <iostream>


using namespace std;

int main() {
    
    int rating = 4;
    
    if(rating == 5){
        puts("5 star rated");
        
    } else if(rating == 4){
        puts("4 star rated");
    }
    else {
        puts("NOT 4 or 5 star rated");
    }
    
    if (true) {
        puts("Go for it");
    }
    
    printf("Your rating feedback is: %s\n", rating == 4 ? "true block" : "false block");
    
    return 0;
}
