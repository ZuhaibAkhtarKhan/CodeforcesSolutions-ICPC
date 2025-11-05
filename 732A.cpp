#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r, count = 0;
    cin >> k >> r;

    int kc = k;
    while(k%10 != r && k%10 != 0) {
        count++;
        k = k + kc;
    }
    cout << count + 1;
}