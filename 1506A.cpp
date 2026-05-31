#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m, x;
        cin >> n >> m >> x;

        int column = x/n + ((x%n != 0) ? 1 : 0);
        int row = abs((column-1)*n - x);

        cout << column + m*(row - 1) << "\n";
    }
}