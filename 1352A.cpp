#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector <int> arr(t);

    for(int &x: arr) {
        cin >> x;        
    }

    for(int x: arr) {
        int num = x, count = 0;
        while(num > 0) {
            if(num%10!=0) count++;
            num/=10;
        }
        cout << count << "\n";
        int i = 1;
        while(x > 0) {
            if(x%10 != 0) cout << (x%10)*i << " ";
            i *= 10;
            x/=10;
        }
        cout << "\n";
    }

}