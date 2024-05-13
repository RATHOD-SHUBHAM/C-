// Variadic means  a function that can accept infinite amount of arguments
// ... -> this is variadic

#include <iostream>
#include <string>


using namespace std;

template <typename T>
void func(T t){
    cout << "One func "<< t << endl;
}

// Todo : Variadics
template<typename T, typename... Args>
void func(T t, Args... args){
    cout << "Two Func "<< t << endl;
    func(args...);
}

int main()
{
    
    string myName = "hitesh";
    
    func(1);
    func(1, 2, 3.4, 4.5, myName);
    return 0;
}
