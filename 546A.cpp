#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;
    int money = (w*(w + 1)/2)*k - n;
    (money>=0) ? (cout << money) : cout << 0;
}