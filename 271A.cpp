#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;


    do {
        
        n++;
        int a = n%10;
        int b = n/10 % 10;
        int c = n/100 % 10;
        int d = n/1000 % 10;

    } while (n%10 == n/10 % 10 || n%10 == n/100 % 10 || n%10 == n/1000 % 10 || n/10 % 10 == n/100 % 10 || n/10 % 10 == n/1000 % 10|| n/100 % 10 == n/1000 % 10);
    cout << n;
}