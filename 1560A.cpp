#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k, element;
    cin >> t;

    while(t--) {
        element = 0;
        cin >> k;
        while(k > 0) {
            element++;
            if(element%10 != 3 && element%3 != 0) {
                k--;
                
            } 
            
        }
        cout << element << "\n";
    }
}