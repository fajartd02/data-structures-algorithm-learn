#include <iostream>
using namespace std;

int main() {

    char a[100] = {'a', 'b', 'c'}; // wrong
    char a[100] = {'a', 'b', 'c', '\0'}; // correct
    char a[100] = "abc"; // alternative
    return 0;
}