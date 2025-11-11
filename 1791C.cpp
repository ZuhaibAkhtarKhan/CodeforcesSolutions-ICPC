#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        for(int i = 0, j = n - 1; i< j; i++, j--) {
            if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')) n -= 2;
            else break;
        }

        cout << n << "\n";
        
    }
}