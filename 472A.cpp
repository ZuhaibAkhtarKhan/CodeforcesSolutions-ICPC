#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 4;
    while((n - num)%2 !=0 && (n - num)%3 !=0 && (n - num)%5 !=0 && (n - num)%7 !=0) {
        num += 2;
    }

    cout << num << " " << n - num;
}