#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int profit = A - (B + C);
    cout << profit << endl;
    
    return 0;
}