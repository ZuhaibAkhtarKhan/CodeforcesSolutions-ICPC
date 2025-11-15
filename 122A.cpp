#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <int> v = {4,7, 47, 74, 77, 44, 444, 447, 474, 477, 744, 747, 774, 777};

    for(int x: v) {
        if(n%x == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}