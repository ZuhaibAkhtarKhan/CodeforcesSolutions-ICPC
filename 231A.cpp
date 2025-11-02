#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;    
    int num = 0;
    for(int i = 0; i < n; i++) {
        int j, k, l;
        cin >>j >> k >> l;       
        if(j+ k +l>=2 ) num++;              
    }
    cout << num;
}