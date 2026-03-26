//Problem 22: Count Numbers Greater Than 10
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 3, 18, 7, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 10) {
            count++;
        }
    }

    cout << "Count of numbers greater than 10: " << count << endl;
    return 0;
}