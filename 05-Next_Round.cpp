#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n, k;
        cin >> n >> k ;
        int a[n-1];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        int check = a[k-1];
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(a[i] >= check && a[i]>0){
                cnt+=1;
            }else{
                break;
            }
        }
        cout << cnt;
        return 0;
}
