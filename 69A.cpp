#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, xS = 0, yS = 0, zS = 0;
    cin >> n;
    while(n--) {
        int x, y, z;
        cin >> x >> y >> z;

        xS += x;
        yS+=y;
        zS+=z;
    }

    if(xS == 0 &&  yS == 0 && zS == 0) cout << "YES";
    else cout << "NO";
}