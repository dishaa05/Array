//Problem 21: Swap First and Last Element
#include <iostream>
using namespace std;

void swapFirstAndLast(int arr[], int size) {
    if (size < 2) return; // No need to swap if array has less than 2 elements
    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    swapFirstAndLast(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
