#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, con;
    cin >> n >> k;

    if(n%2 == 0) con = n/2;
    else con = n/2 + 1;

    if(k <= con) {
        cout << 1 + (k - 1)*2;
    } else {
        cout << 2 + ((k - con) - 1)*2;
    }
}