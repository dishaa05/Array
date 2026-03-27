//Problem 23: Display Elements at Even Positions
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 3, 18, 7, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Elements at even positions: ";
    for (int i = 0; i < size; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}