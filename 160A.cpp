#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, coins = 0;
    cin >> n;
    vector <int> v(n);

    for(int &x: v) cin >> x, sum+=x;

    sort(v.rbegin(), v.rend());

    int sumT = 0;
    while(sumT <= sum/2) {
        sumT += v[coins];
        coins++;        
    }
    cout << coins;


}