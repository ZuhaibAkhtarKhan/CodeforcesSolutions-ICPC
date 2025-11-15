#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    long long count = 0;
    cin >> n >> m >> a;
    if(n != 0 && m != 0) {
        while(m > 0) {
            int nC = n;
            
            count+=nC/a;
            nC = nC%a;
            if(nC%a != 0) {
                count++;
            }
            
            m -= a;
        }

    } 
       
    cout << count;
    
}