#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r = 0, e, c = 0;
    cin >> n;

    for(int i = 0; i< n; i++) {
        cin >> e;
        if(e >= 1) r += e;
        else {

            if(r <= 0) {
                c++;
            } else {
                r--;
            }
        }
    }
    cout << c;
    
}