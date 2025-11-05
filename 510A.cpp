#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int opt = m-1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i%2 == 0) cout << "#";
            else {
                
                if(j != opt) cout << ".";
                else cout << "#";

                

            }
            
           
        } 
        if(i%2 != 0) {
           (opt == m-1) ? opt = 0 : opt = m -1; 
        }
        
        cout << "\n";
    }
}