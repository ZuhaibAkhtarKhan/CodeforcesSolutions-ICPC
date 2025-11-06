#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> x(4);
    cin >> x[0]>> x[1]>> x[2]>> x[3];

    sort(x.begin(), x.end());

    int a = x[3] - x[0];
    int b = x[3] - x[1];
    int c = x[3] - x[2];

    cout << a << " " << b << " " << c;
}

