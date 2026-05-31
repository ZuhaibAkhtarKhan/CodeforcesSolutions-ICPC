#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int max = (g > c && g > l) ? g : ((c > l && c > g) ? c : l);
    int min = (g < c && g < l) ? g : ((c < l && c < g) ? c : l);

    int median = (g+l+c) - max - min;
    if(max - min < 10) cout << "final " << median;
    else cout << "check again";
}