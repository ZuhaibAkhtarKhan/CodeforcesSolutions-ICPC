#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, base = "abc";
        cin >> s;
        int diff = 0;
        for(int i = 0; i< 3; i++) {
            if(base[i] != s[i]) diff++;
        }
        if(diff <= 2) cout << "YES\n";
        else cout << "NO\n";        
    }
}