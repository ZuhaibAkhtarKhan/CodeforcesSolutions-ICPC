#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> h(n);

    for(int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int max = 0;
    int min = 0;

    for(int i = 1; i < n; i++) {
        if(h[max] < h[i]) max = i;
        if(h[min] >= h[i]) min = i;
    }
    
    if(max > min) {
        cout << (n - 1 - min) + max - 1;
    }
    else if(max < min) {
        cout << max + (n - 1 - min);
    };

    
    
}