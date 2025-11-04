#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    vector <int> arr(t);
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        arr[i] = (b - (a%b))%b;
    }
    for(int x : arr) cout << x << endl;
}