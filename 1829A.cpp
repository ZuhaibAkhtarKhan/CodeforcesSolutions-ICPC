#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "codeforces";
    int t;
    cin >> t;
    while(t--) {
        string inp;
        cin >> inp;

        int count = 0, i = 0;
        while(s[i] != '\0') {
            if(s[i] != inp[i]) count++;

            i++;
        }
        cout << count << "\n";
        
    }
}