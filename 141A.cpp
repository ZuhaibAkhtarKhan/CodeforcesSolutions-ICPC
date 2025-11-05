#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s;
    cin >> s1 >> s2 >> s;

    string newS = s1 + s2;
    sort(newS.begin(), newS.end());
    sort(s.begin(), s.end());

    if (newS.length() != s.length()) {
        cout << "NO";
        return 0;
    }

    int l = newS.length();
    for(int i = 0; i< l; i++) {
        if(newS[i] != s[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    
}