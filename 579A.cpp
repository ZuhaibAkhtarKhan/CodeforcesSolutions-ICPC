#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, count = 0;
    cin >> x;

    while(x > 0) {
        int t = 1;

        while(t*2 <= x) {
            t*=2;
        }


        count++;
        x-=t;
    }
    cout << count;
}