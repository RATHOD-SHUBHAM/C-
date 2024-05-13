
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
    
    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int x: myints){
        cout<< x << " ";
    }
    cout << "\n";
    
    // Mostly a Lambda function.
    // Two ways to write partition function

    // One
    partition(myints.begin(), myints.end(), [](auto x){
        return x%2==0; // when this condition is satisfied , things will be on left and unsatisfied condition will be on right
    });

    // Two
    partition(begin(myints), myints.end(), [](auto x){
        return x%2==0; // when this condition is satisfied , things will be on left and unsatisfied condition will be on right
    });

    for (int x: myints){
        cout<< x << " ";
    }
    cout << "\n";
    
    return 0;
}
