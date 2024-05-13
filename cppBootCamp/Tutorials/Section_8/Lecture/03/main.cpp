#include <iostream>
#include <string>


using namespace std;



int main()
 {
    // Todo: Lambda syntax
     []{cout << "Hello LearnCodeOnline.in\n";}(); // syntax one - without return type
     [](){return 100;}; // syntax 2 - with return type
     
     // Todo: Lambda function
     auto sum = [](auto a, auto b){
         return a + b;
     };
     
     cout << "SUm of 2 and 5 is: " << sum(2, 5) << endl;
     cout << "SUm of 2.5 and 5.5 is: " << sum(2.5, 5.5) << endl;
     
     string a = "abc";
     string b = "def";
     cout << sum(a, b) << endl;
     
    return 0;
 }
