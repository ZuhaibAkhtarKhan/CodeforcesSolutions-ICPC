#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0, d = 0;
    cin >> n;

    vector <int> cards(n);
    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    for(int i = 0; i< n/2; i++) {
        if(cards[i] > cards[n-i -1]) {
            s += cards[i];
            d += cards[n - i - 1];
        } else {
            d += cards[i];
            s += cards[n - i - 1];
        }
    }

    cout << s << " " << d;
}