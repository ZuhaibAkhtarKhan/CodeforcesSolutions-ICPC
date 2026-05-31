#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int i = 0;
        while(n%7 != 0 && i < 10) {
            n = (n/10) *10 + i;
            i++;
        }
        cout << n << "\n";
        
    }
}