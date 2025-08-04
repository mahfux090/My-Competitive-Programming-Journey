#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int rem = n % 8;
        if(rem == 1){
            cout << n + 3 << "LB" << endl;
        }
        else if(rem == 2){
            cout << n + 3 << "MB" << endl;
        }
        else if(rem == 3){
            cout << n + 3 << "UB" << endl;
        }
        else if(rem == 4){
            cout << n - 3 << "LB" << endl;
        }
        else if(rem == 5){
            cout << n - 3 << "MB" << endl;
        }
        else if(rem == 6){
            cout << n - 3 << "UB" << endl;
        }
        else if(rem == 7){
            cout << n + 1 << "SU" << endl;
        }
        else { // rem == 0
            cout << n - 1 << "SL" << endl;
        }
    }
    return 0;
}