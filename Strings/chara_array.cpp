#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[] = {'a', 'b', 'c', '\0'};
    cout << a << endl;
    cout << strlen(a) << endl;
    cout << sizeof(a) << endl;

    // char b[100];
    // cin >> b;
    // cout << b << endl;

    char b[100];
    char temp = cin.get();
    int len = 1;
    char sentence[1000];
    int index = 0;
    while(temp != '\n') {
        sentence[index++] = temp;
        len++;
        cout << temp;
        temp = cin.get();
    }
    cout << endl;
    cout << len << endl;
    sentence[len] = '\0';
    cout << sentence << endl;

    return 0;
}