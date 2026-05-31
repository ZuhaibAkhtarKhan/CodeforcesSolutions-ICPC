#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, start = 1;
    long long count = 0;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if(a < start) {
            count +=( a +n - start);
        } else {
            count += (a-start);
        }
        
        start = a;
    }

    cout << count;
}