#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, inp, count = 0;
    cin >> n;

    int max;
    cin >> max;
    int min = max;

    for(int i = 1; i< n; i++) {
        cin >> inp;
        if(max < inp) {
            max = inp;
            count++;
        } 
        if(min > inp) {
            min = inp;
            count++;
        }
    }
    cout << count;


}