#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h, count = 0, p;
    cin >> n >> h;

    for(int i = 0; i < n; i++) {
        cin >> p;
        if(p > h) count = count + 2;
        else count++;
    }
    cout << count;
}