#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t, a, b, c;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        if(a + b == c) cout << "+\n";
        else if(a - b == c) cout << "-\n";
    }
}