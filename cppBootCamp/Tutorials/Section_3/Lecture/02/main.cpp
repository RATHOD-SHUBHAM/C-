#include <iostream>
using namespace std;
//#define PI 3.14 // Pre processor constants


// We can also create a pre-processor constant like this
// enum has a feature of auto increment
enum MsOffice: uint8_t {
    BOLD = 0,
    ITALICS = 2,
    UNDERLINE = 4,
    COSSED
};


int main() {
    int myAttributes = UNDERLINE;
    
    cout << myAttributes << endl;
    
    
    return 0;
}


