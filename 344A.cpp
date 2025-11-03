#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, o, p, count = 1;
    cin >> n;
    
    cin >> p;
    for(int i = 1; i < n; i++) {
        cin >> o;
        if(p != o) {
            count++;
            p = o;
        }
    }
    cout << count;
}