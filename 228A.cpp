#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    
    set <int> horseshoes;
    for(int i = 0; i < 4; i++) {
        cin >> s;
        horseshoes.insert(s);
    }
    cout << 4 - horseshoes.size();    
}