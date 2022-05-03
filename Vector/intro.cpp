#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Demo Vector
    // vector<int> arr = {1, 2, 10, 12, 15};

    // Fill Constructor
    vector<int> arr(10, 7);

    // Fi
    vector<int> visited(100, 0);

    // Pop_back O(1);
    arr.pop_back();

    // Push_Back O(1)
    arr.push_back(16);

    // print all elements
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Size of the vector
    cout << arr.size() << endl;

    // Capacity of the vector
    cout << arr.capacity();

    return 0;
}