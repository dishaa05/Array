//Problem 2: Display Array Elements with Index

#include<iostream>
using namespace std;

int main() {
    int array[5];
    for(int i=0; i<5; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> array[i];
    }

    cout << "Index :" << endl;
    for(int i=0; i<5; i++) {
        cout << "Index " << i << ": " << array[i] << endl;
    }

    return 0;
}