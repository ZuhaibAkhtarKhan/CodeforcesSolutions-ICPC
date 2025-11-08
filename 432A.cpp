#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    vector <short int> v(n);
    for(short int &x: v) cin >> x;

    sort(v.begin(), v.end());

    int i = 2;
    while((k + v[i]) <= 5 && i <= n-1) {
        
        count++;
        
        i = i + 3;
    }
    cout << count;
}