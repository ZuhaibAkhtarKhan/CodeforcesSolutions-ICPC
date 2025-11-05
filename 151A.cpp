#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    vector <int> arr(3);
    arr[0] = k*l/nl;
    arr[1] = p/np;
    arr[2] = c*d;

    cout << (*min_element(arr.begin(), arr.end()))/n;

}