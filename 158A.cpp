#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0, k = n, count = 0, score = 0;    
    cin >> n >> k;
    vector <int> arr(n);
    for(int &x:arr) cin >> x;
    score = arr[k-1];
    for(int i: arr) {
        if(i>0 && i >= score) count++;
        else break;
    }
    cout << count;
    return 0;
}