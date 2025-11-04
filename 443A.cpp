#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set <char> letters;

    int l = s.length();
    for(int i = 0; i < l; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') letters.insert(s[i]);
    }

    cout << letters.size();
}