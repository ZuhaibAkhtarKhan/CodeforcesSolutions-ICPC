#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, temp, x = 0;
        cin >> n >> m;

        temp = m;
        bool doIt = true;
        while(n--) {
            string s;
            cin >> s;
            if(s.length() <= temp && doIt) {
                temp-=s.length();
                x++;
            } else {
                doIt = false;
            }
        }
        cout << x << "\n";
    }
}