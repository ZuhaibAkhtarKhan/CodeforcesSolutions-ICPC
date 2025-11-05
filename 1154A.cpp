#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> x(4);
    cin >> x[0]>> x[1]>> x[2]>> x[3];

    long long sum = (x[0] + x[1] + x[2] + x[3])/3;

    for(int i = 0; i< 4; i++) {
        if(x[i] == sum) x.erase(x.begin()+ i);
    }
    cout << (x[0] + x[1] - x[2])/2 << " ";
    cout << (x[0] - x[1] + x[2])/2 << " ";
    cout << (x[1] + x[2] - x[0])/2;


}