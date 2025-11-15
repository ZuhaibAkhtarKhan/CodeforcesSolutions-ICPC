#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int l = abs(a-b) * 2;

        if(a > l || b > l || c > l) {
            cout << -1 << "\n";
            continue;
        }
        if(l/2 + c > l) {
            cout << l/2 + c -l << "\n";
        } else {
            cout << l/2 + c << "\n";
        }        
    }
}
