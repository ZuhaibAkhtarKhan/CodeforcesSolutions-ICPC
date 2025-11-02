#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;
    string* arr = new string[num];
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
        int l = arr[i].length();
        if(l > 10) {
            arr[i] = arr[i][0] + to_string(l - 2) + arr[i][l-1];
        }
    }
    for(int i = 0; i < num; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}