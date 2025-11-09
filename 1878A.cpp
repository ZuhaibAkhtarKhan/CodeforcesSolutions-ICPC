#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, a;
        cin >> n >> k;
        
        bool p = false;
        while(n--) {
            cin >> a;
            if(a == k) {
                p = true;
            }
        }
        if(p) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}