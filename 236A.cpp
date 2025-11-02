#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set <char> distinctChars;
    for(int x: s) {
        distinctChars.insert(x);
    }

    if(distinctChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else{
        cout << "IGNORE HIM!";
    }

    return 0;
}