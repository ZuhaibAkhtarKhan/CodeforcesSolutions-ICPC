#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t;
    string s = "codeforces";
    cin >> t;
    while(t--) {
        char c;
        cin >> c;
        if(s.find(c) != string::npos) cout << "YES\n";
        else cout << "NO\n";
    }
}