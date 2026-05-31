#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a = 1, b = 0;
    cin >> n;

    string teamA, teamB, team;
    n--;
    cin >> teamA;
    while(n--) {
        cin >> team;
        if(team == teamA) a++;
        else teamB = team, b++;
    }
    if(a > b) cout << teamA;
    else cout << teamB;
}