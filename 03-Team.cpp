#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int question = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        int Petya, Vasya, Tonya;
        cin >> Petya>> Vasya>> Tonya;
        
        if(Petya+Vasya+Tonya >= 2){
            question ++;
        }
    }
    cout << question;
}
