#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int stops, maxi=0; 
    cin >> stops;
    int numberofpassenger = 0;
    
    while(stops > 0){
        int exit, enter;
        cin >> exit >> enter;
        
        numberofpassenger = numberofpassenger - exit + enter;
        maxi = max(maxi, numberofpassenger);
        
        stops--;
    }
    
    cout << maxi;
    return 0;
}
