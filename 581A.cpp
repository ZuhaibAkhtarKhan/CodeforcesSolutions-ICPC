#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, s = 0;
    cin >> a >> b;

    if(a > b) {
        cout << b << " ";
        a -= b;
        while(a >= 2) {
            s++;
            a -= 2;
        }
        cout << s;
    } else {
        cout << a << " ";
        b -= a;
        while(b >= 2) {
            s++;
            b -= 2;
        }
        cout << s;
    }


}