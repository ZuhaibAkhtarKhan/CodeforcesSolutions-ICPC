#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, p = 0, m = 0, pe = 0;
    cin >> n;

    vector <short int> v(n);

    for(int i = 0; i< n; i++) {
        cin >> t;
        if(t == 1) p++;
        else if(t == 2) m++;
        else pe++;

        v[i] = t;
    }

    int w = min({p, m, pe});
    cout << w << "\n";
    while(w--) {
        for(int i = 0; i< n; i++) {
            if(v[i] == 1) {
                cout << i+1 << " ";
                v[i] = 0;
                break;               
            }
        }
        for(int i = 0; i< n; i++) {
            if(v[i] == 2) {
                cout << i+1 << " ";
                v[i] = 0;
                break;               
            }
        }
        for(int i = 0; i< n; i++) {
            if(v[i] == 3) {
                cout << i+1 << " ";
                v[i] = 0;      
                break;          
            }
        }

        cout << "\n";
    }

}