#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t;
    cin >> t;

    
    while(t--) {
        vector <short int> v(3);
        
        cin >> v[0] >> v[1] >> v[2];

        sort(v.begin(), v.end());
        cout << v[1] << "\n";
    }
}