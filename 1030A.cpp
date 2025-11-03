#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool opinion = false;
    string dif = "EASY";

    for(int i = 0; i < n; i++) {
        cin >> opinion;
        if(opinion) {
            dif = "HARD";
        }
    }
    cout << dif;
}