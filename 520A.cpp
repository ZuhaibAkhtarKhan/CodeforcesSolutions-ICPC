#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char ch = 'a';
    do{
        if(s.find(ch) == string::npos) {
            cout << "NO";
            return 0;
        }
        ch++;
    } while(ch <= 'z');

    cout << "YES";
    
}