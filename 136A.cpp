#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> givesTo(n+1);
    vector <int> receivesFrom(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> givesTo[i];
        receivesFrom[givesTo[i]] = i;
    }

    
    for(int i = 1; i<= n; i++) {
        cout << receivesFrom[i] << " ";
    }
}