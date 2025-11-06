#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        vector <short int> v(n);
        for(short int &x: v) cin >> x;


        if(n == 3) {
            if(v[0] == v[1]) cout << 3 << "\n";
            else if(v[0] == v[2]) cout << 2 << "\n";
            else cout << 1 << "\n";
        } else {
            for(short int i = 0; i< n; i++) {
                if(v[i]+v[i+1] != v[i+1] + v[i+2]) {
                    if(v[i] == v[i+1]) {
                        cout << i + 3 << "\n";
                        break;
                    } else if(v[i] == v[i+2]) {
                        cout << i + 2 << "\n";
                        break;
                    } else if(v[i+1] ==v[i+2]) {
                        cout << i + 1 << "\n";
                        break;
                    }
                    
                }
            }
        }
        
        

    }
}