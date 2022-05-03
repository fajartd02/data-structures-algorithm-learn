#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[1000] = "apple";
    char b[1000];

    // How to know size
    cout << strlen(a) << endl;

    // Copy
    strcpy(b, a);
    cout << b << endl;

    // Compare
    cout << strcmp(a, b) << endl; // Return 0 if same
    cout << strcmp("Hello", b) << endl; // Return -1 if not same but left < right
    cout << strcmp("www.coding.minutes.com", b) << endl; // Return 1 if not same but left > right

    char web[] = "www.";
    char domain[] = "codingminutes.com";
    char concat[1000];
    // cout << strcat(web, domain) << endl;
    strcpy(concat, strcat(web, domain));
    cout << concat << endl;

    return 0;
}