#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, r;
    cin >> t;
    for(int i = 0; i< t; i++) {
        cin >> r;
        if(r <= 1399) {
            cout << "Division 4";
        } else if(r <= 1599) {
            cout << "Division 3";
        } else if(r <= 1899) {
            cout << "Division 2";
        } else {
            cout << "Division 1";
        }
        cout << "\n";
    }
}