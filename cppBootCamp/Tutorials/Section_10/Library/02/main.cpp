

#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    
    list<int> mylist; // just like array, but there is no guarantee that memory are continuous
    
    for (int i = 3; i <= 10; ++i) {
        mylist.push_back(i);
    }
    
    cout << mylist.front() << endl;
    
    cout << mylist.back() << endl;
    
    mylist.pop_back();
    
    mylist.reverse();
    
    for (auto i : mylist) {
        cout << i << " ";
    }
    cout << endl;
    
    mylist.sort();
    for (auto i : mylist) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}
