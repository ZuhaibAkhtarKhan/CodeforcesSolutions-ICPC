#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    if(word[0] >= 'a' && word[0] <= 'z') word[0] = toupper(word[0]);
    cout << word;
}