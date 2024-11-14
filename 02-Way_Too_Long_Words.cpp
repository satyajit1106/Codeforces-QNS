#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;

    while(n-- > 0){
        cin >> s;
        if(s.length() <= 10){
            cout << s << endl;
        }
        else{
            int count = s.length() - 2;
            cout << s[0]+to_string(count)+s[s.length()-1] << endl;
        }
    }
}
