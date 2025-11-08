#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, num;
    cin >> t;

    while(t--) {
        cin >> n;
        int count = 0, maxCount = 0;
        while(n--) {
            cin >> num;
            if(num == 0) {
                count++;
                if(count > maxCount) maxCount = count;
            } else {                   
                count = 0;
            }                        
        } 
        cout << maxCount << endl;
    }
}