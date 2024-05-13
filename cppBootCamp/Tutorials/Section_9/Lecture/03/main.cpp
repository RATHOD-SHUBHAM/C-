
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    
    int numbers[6] = {3, 2, 6, 4, 7, 9};
    
    cout << "Unsorted values: " << endl;
    for(int n : numbers){
        cout << n << " " ;
    }
    
    sort(numbers, numbers+6);
    sort_heap(numbers, numbers+6);

if (binary_search(numbers, numbers+6, 9)) {
        cout << "found it" << endl;
    } else {
        cout << "NOT found it" << endl;
    }

    cout << "SORTED values: " << endl;
    for(int n : numbers){
        cout << n << " " ;
    }
    
    
    
    return 0;
}
