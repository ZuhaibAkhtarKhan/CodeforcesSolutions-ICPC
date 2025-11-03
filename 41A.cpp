#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int sl = s.length();
    int tl = t.length();
    if(sl != tl) {
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < sl; i++) {
        if(s[i] != t[tl - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}