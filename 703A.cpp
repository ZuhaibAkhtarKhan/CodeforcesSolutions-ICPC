#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mC = 0, cC = 0;
    cin >> n;
    while(n--) {
        int m, c;
        cin >> m >> c;
        if(m > c) mC++;
        else if(m < c) cC++;
    }
    if(mC > cC) cout << "Mishka";
    else if(cC > mC) cout << "Chris";
    else cout << "Friendship is magic!^^";
}