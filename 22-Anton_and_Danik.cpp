#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;
   string s;
   cin >> s;
   int countA = 0, countD = 0;
   int size = s.size();
   
   for(int i=0; i<size; i++){
       if(s[i] == 'A'){
           countA++;
       }
       else if(s[i] == 'D'){
           countD++;
       }
   }
   
   if(countA > countD){
       cout << "Anton";
       return 0;
   }
   else if(countA < countD){
       cout << "Danik";
       return 0;
   }
   else if(countA == countD){
       cout << "Friendship";
       return 0;
   }
   
   return 0;
}

