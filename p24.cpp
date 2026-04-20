// Problem 24: Display Elements at Odd Positions
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements at odd indices:\n";
    for(int i = 1; i < n; i += 2) {
        cout << arr[i] << " ";
    }

    return 0;
}
