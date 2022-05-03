#include <iostream>
using namespace std;

int main() {
    char sentence[1000];
    // cin.getline(sentence, 1000);
    cin.getline(sentence, 1000, '.'); // CUSTOM STOP AREA
    cout << sentence << endl;

    return 0;
}