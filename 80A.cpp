#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    n++;
    while((n%2 == 0 && n!=2) || (n%3 == 0 && n!=3) || (n%5 == 0 && n != 5) || (n%7 == 0 && n!=7)) {
        n++;
    }
    if(n == m) cout << "YES";
    else cout << "NO";
}