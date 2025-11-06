#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, burles = 0;
    cin >> n;

    vector <int> v(n);
    for(int &x: v) cin >> x;

    sort(v.begin(), v.end());

    for(int i = 0; i< n; i++) {
        burles += (v[n-1] - v[i]);
    }

    cout << burles;

}