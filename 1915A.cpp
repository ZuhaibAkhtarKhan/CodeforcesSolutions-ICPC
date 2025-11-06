#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t, a, b, c;
    cin >> t;

    while(t--) {
        cin >> a >> b >> c;
        if(a == b) cout << c << "\n";
        else if(b == c) cout << a << "\n";
        else cout << b << "\n";
    }
}