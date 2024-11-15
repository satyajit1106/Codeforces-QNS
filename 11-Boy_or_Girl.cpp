#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    vector<int> v(25, 0);
    for(int i=0; i<s.size(); i++){
        v[ s[i]- 'a']++;
    }
    
    int count = 0;
    for(int i=0; i<26; i++){
        if(v[i]>=1){
            count ++;
        }
    }

    if(count % 2 == 0){
        cout << "CHAT WITH HER!" ;
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
    
}
