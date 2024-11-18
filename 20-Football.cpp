#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.size();
    int zcount = 0; 
    int ocount = 0; 
    
    for (int i = 0; i < size; i++) {
        if (s[i] == '1') {
            ocount++;
            zcount = 0; 
        } 
        else if (s[i] == '0') {
            zcount++;
            ocount = 0; 
        }
        
        if (zcount >= 7 || ocount >= 7) {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}

