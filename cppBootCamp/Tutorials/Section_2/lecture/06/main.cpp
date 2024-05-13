


#include <iostream>


using namespace std;



int main() {
    
    bool isfbUser = false;
    bool isGoogleUser = true;
    bool isAdmin = true;
    
    if ( (isGoogleUser || isfbUser) && isAdmin) {
        puts("Welcome admin");
    } else{
        puts("No admin access!");
    }
    
    
    if (isfbUser || isGoogleUser) {
        puts("Welcome user");
    }
    
    return 0;
}


