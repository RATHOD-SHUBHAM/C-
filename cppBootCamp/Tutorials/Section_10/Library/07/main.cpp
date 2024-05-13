#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
   

int main() {
    
    // Dictionary
    map<string, string> languages;
    languages["py"] = "python";
    languages["cpp"] = "c plus plus";
    languages["js"] = "javascript";
    languages["rb"] = "Ruby";
    languages["rb"] = "Ruby-one";
    
    languages.insert(make_pair("pl", "Perl"));
    
    for (auto &val : languages) {
        cout << val.first << " : " <<val.second<< endl;
    }
    
    return 0;
}
