#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int left = 240 - k;

    int i = 0;

    while(left >= 0 && n >= 0) {
        i++;
        left -= 5*i;
        --n;
    }

    cout << i - 1;
}