//Problem 25: Check if Array has Duplicates
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

    bool duplicate = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
        if(duplicate) break;
    }

    if(duplicate)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}