#include <iostream>
#include <string>
#include <vector> // array list also known as vector

using namespace std;

struct Corners{
    float a, b, c, d;
};

// Streaming operator
ostream& operator<<(ostream& stream, const Corners& corner){
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}

int main()
{
    
    vector<int> inty;
    
    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);
    
    
    // i here is a reference
    for (auto i = inty.begin(); i != inty.end(); ++i) {
        cout << *i << endl;
    }

    // we can have anything inside array list
    vector<Corners> corners;
    
    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});
    
    
    // we need to steam the data
    for (int i = 0; i < corners.size(); ++i) {
        cout << corners[i] << endl; // this will only work since we have defined our streaming function above
    }
   
    return 0;
    
}
