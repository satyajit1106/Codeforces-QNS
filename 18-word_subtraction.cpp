#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    for(int i=k; k>0; k--){
        if(n%10 == 0){
            n = n/10;
        }else{
            n = n - 1;
        }
    }
    cout << n;
    return 0;
}

