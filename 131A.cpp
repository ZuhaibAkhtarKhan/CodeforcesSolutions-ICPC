#include <bits/stdc++.h>
using namespace std;

int main() {
    string w, s="";
    cin >> w;

    bool shouldBeInverted = true;

    int l = w.length();
    for(int i = 1; i< l; i++) {
        if(islower(w[i])) {
            shouldBeInverted = false;
            break;
        }
    }

    if(shouldBeInverted) {
        s+= (isupper(w[0])) ? (tolower(w[0])) : (toupper(w[0]));

        for(int i = 1; i< l; i++) {
            s += tolower(w[i]);
        }
        cout << s;
    } else {
        cout << w;
    } 
    
    
}