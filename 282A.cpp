#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    string statement;
    while(n--) {
        cin >> statement;
        (statement[1] == '+') ? ++x : --x;
    }    
    cout << x;
}