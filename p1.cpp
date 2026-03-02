//Problem 1: Input and Display Array



#include <iostream>
using namespace std;

int main() {
    int arr[5];   // Declare array of size 5

    // Taking input from user
    cout << "Enter 5 numbers: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Displaying the array elements
    cout << "The elements in the array are: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}