#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b){
    // Todo: move semantic
    int tmp = move(a);
    a = move(b);
    b = move(tmp);
}

string printMe(){
    return "I am print";
}

int main()
{
    int a =  3;
    int b = 4;
    
    swap(a, b);
    
    cout << "A : " << a << endl;
    
    string s = printMe();
    
    string&& ss = printMe(); // Move semantics
    
    return 0;
    
}
