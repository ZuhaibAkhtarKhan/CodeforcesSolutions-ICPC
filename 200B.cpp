#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, inp;
    long double o = 0.00;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> inp;
        o+=inp;
    }
    
    cout << fixed << setprecision(12)<< o/n;
}