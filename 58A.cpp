#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, h = "hello";
    cin >> s;

    int i = 0;
    int j = 0;
    while(s[j] != '\0') {
        if(s[j] == h[i]) i++;
        if(i == 5) break;

        j++;
    }

    if(i==5) cout << "YES";
    else cout << "NO";
}