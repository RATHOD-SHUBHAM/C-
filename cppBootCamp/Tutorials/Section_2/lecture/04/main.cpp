//https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link
//https://stackoverflow.com/questions/3322911/what-do-linkers-do


#include <iostream>


using namespace std;

int lifeUp(){
    static int life = 3;
    return ++life;
}

int main() {
    
    int life = 3;
    cout << "Your starting game life is: " << life << endl;
    
    life = lifeUp();
    printf("Your updated game life is %d\n", life);
    
    
    life = lifeUp();
    printf("Your updated game life is %d\n", life);
    
    return 0;
}


