#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    map<char, int> count;
    for (char c : s) {
        if (c != '+') {  
            count[c]++;
        }
    }
    
    string result;
    
    for (auto it: count) {
        for (int i = 0; i < it.second; ++i) {
            if (!result.empty()) {
                result += "+";
            }
            result += it.first;
        }
    }
    
    cout << result << endl;
    return 0;
}

