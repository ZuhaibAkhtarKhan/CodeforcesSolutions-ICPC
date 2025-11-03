#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, remained = 0, a, b, capacity = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        remained = remained + (b - a);
        if(capacity < remained) {
            capacity = remained;
        }
    }
    cout << capacity;
}