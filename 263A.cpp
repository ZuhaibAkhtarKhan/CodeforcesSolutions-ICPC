#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5][5] {0};
    for(int i = 0; i < 5; i++) {
        for(int &x:arr[i]) {
            cin >> x;
        }
    }
    bool found = false;
    int row = 0, col = 0;
    for(int i = 0; i < 5 && !found; i++) {
        for(int j = 0; j < 5 && !found; j++) {
            if(arr[i][j] == 1) {
                row = i+1;
                col = j+1;
                found = true;
                break;
            } 
        }
    }
    cout << abs(3-row) + abs(3-col);
    
}