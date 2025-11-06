#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << n/10 + n%10 << "\n";
    }
}