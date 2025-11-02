#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for(char x: s) {
        if(isupper(x)) {
            upper++;
        } else if(islower(x)){
            lower++;
        }
    }
    if(upper > lower) {
        for(char &x: s) x = toupper(x);        
    } else {
        for(char &x: s) x = tolower(x);        
    }
    cout << s;
}