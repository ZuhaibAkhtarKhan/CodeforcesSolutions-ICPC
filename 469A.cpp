#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , p, q, x;
    cin >> n;
    vector <bool> arr(n, false);
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> x;
        arr[x-1] = true;
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> x;
        arr[x-1] = true;
    }
    for(int y: arr) {
        if(y == false) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";

}