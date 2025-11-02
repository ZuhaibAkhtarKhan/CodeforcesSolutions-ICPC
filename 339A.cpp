#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector <char> nums;
    for(char x : s) {
        if(x!='+') nums.push_back(x);
    }
    sort(nums.begin(), nums.end());

    int l = nums.size();
    for(int i = 0; i < l; i++) {
        cout << nums[i];
        if(i != l -1) cout << "+" ;
    }
}