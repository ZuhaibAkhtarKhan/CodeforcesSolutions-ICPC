#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t;
    cin >> t;

    while(t--) {
        short int n;
        cin >> n;

        vector <short int> a(n);

        int sum = 0;
        for(int i = 0; i<n; i++) {
            
            cin >> a[i];
            if(i > 0) {
                sum += a[i];
            }
        }
        if(a[0]%2 == sum%2) {
            cout << "YES\n";
        } else cout << "NO\n";
    }
}