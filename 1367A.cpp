#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string b;
        cin >> b;

        int l = b.length();

        cout << b[0];
        for(int i = 1; i< l; i += 2) {
            cout << b[i];
        }

        cout << "\n";
    }
}
