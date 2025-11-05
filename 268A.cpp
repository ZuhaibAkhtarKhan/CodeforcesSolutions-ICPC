#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector <vector <int>> arr(n, vector<int> (2));

    for(int i = 0; i< n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i = 0; i< n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i][0] == arr[j][1]) count++;            
            if(arr[i][1] == arr[j][0]) count++;
        }
    }

    cout << count;
}