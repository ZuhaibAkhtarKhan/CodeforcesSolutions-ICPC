#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int l = s.length();
    vector <char> v;

    string vovels = "AEIOUYaeiouy";
    
    for(int i = 0; i <l; i++) {
        if(vovels.find(s[i]) == string::npos) {
            cout << "." << (char)tolower(s[i]);
        }
    }
}