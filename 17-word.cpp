#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int lowercase = 0;
    int uppercase = 0;
    int size = s.size();
    
    for (int i = 0; i < size; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        }
    }
    
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (lowercase >= uppercase) {
            ans += tolower(s[i]);
        } else {
            ans += toupper(s[i]);
        }
    }
    
    cout << ans;
    return 0;
}

