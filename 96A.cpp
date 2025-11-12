#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1;

    int i = 0;
    while(s[i+1] != '\0') {
        if(s[i] == s[i+1]) {
            count++;
            if(count>=7) {
                cout << "YES";
                return 0;
            }
        } else {
            count = 1;
        }
        i++;
    }

    cout << "NO";
}