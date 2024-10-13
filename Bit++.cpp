#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int val = 0;
    cin >> t;

    while(t-- > 0){
        string s;
        cin >> s;
        
        if(s.find("++") != string::npos ){
            val ++;
        }
        else if (s.find("--") != string::npos ){
            val --;
        }
    }
    cout << val;
}
