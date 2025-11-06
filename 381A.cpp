#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0, d = 0;
    cin >> n;

    vector <int> cards(n);
    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int i = 0; 
    int j = n - 1;

    bool sTurn = true;

    while(i <= j) {
        if(cards[i] > cards[j]) {
            if(sTurn) {
                s+=cards[i];
            } else {
                d += cards[i];
            }
            i++;
        } else {
            if(sTurn) {
                s+=cards[j];
            } else {
                d += cards[j];
            }
            j--;
        }
        sTurn = !sTurn;
        
        
        
    }

    cout << s << " " << d;
}