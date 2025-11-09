#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t;
    cin >> t;

    while(t--) {
        int n, i, j;
        cin >> n;
    
        vector <int> v(n);
        bool c = false;
        for(int &x: v) cin >> x;
        sort(v.begin(), v.end());
        if(n != 1) {
            for(int i = 0; i < n -1; i++) {
                if(abs(v[i] - v[i+1]) > 1) {
                    c = true;
                    break;
                }
            }
        }
        
        (c) ? (cout << "NO\n") : (cout << "YES\n");
              
    }
}