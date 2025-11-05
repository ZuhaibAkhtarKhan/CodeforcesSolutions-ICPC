#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    
    vector <bool> arr(d+1, false);
    
    for(int i = k; i <=d; i+=k) arr[i] = true;
    for(int i = l; i <=d; i+=l) arr[i] = true;
    for(int i = m; i <=d; i+=m) arr[i] = true;
    for(int i = n; i <=d; i+=n) arr[i] = true;

    cout << count(arr.begin() + 1, arr.end(), true);
    
}