#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    if(n & 1) {
        cout << "ODD\n";
    } else {
        cout << "Even\n";
    }

    return 0;
}