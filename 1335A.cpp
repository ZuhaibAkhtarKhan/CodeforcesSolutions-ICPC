#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long inp;
    cin >> t;

    vector <int> answers(t);

    for(int i = 0; i < t; i++) {
        cin >> inp;
        answers[i] = (inp%2 == 0) ? inp/2 -1 : inp/2;
    }

    for(int x: answers) cout << x << "\n";
}