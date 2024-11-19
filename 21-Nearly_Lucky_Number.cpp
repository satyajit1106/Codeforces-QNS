#include <bits/stdc++.h>
using namespace std;

bool isLuckyNumber(int x) {
    if(x==0) return false;
    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    
    int luckyDigitCount = 0;
    for (char ch : n) {
        if (ch == '4' || ch == '7')
            luckyDigitCount++;
    }
    
    if (isLuckyNumber(luckyDigitCount))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}

