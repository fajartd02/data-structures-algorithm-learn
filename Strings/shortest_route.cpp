#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char route[1000];
    cin.getline(route, 1000);

    int x = 0, y = 0;
    for(int i = 0; route[i] != '\0'; i++) {
        switch(route[i]) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
        }
    }
    cout << "Final X and Y is " << x << " " << y << endl;

    if(y != 0) {
        if(y < 0) {
            while(y != 0) {
                cout << "S";
                y++;
            }
        } else {
            while(y != 0) {
                cout << "N";
                y--;
            }
        }
    }

    if(x != 0) {
        if(x < 0) {
            while(x != 0) {
                cout << "W";
                x++;
            }
        } else {
            while(x != 0) {
                cout << "E";
                x--;
            }
        }
    }  

    return 0;
}