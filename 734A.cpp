#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0, danik = 0;
    for(char x : s) {
        if(x == 'A') anton++;
        else if(x == 'D') danik++;
    }

    if(danik > anton) {
        cout << "Danik";
    } else if(danik < anton) {
        cout << "Anton";
    } else {
        cout << "Friendship";
    }
}