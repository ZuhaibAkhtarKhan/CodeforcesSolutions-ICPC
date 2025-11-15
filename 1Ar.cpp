#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    
    long long xTiles = (m + a - 1)/a, yTiles = (n + a - 1)/a;

    cout << xTiles*yTiles;
}