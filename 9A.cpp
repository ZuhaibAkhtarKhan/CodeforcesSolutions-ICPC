#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int s = 6 - ((y > w) ? y : w) + 1;

    int g = gcd(s, 6);

    cout << s/g << "/" << 6/g;
}