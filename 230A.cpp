#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector <pair<int, int>> v(n);
    bool won = true;
    for(auto &x : v) {
        cin >> x.first >> x.second;
    }

    sort(v.begin(), v.end());
    
    for(auto i : v) {
        if(s > i.first) {
            s += i.second;
        } else {
            won = false;
            break;
        }
    }
    (won) ? (cout << "YES") : (cout << "NO");
}
