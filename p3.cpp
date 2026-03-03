//Problem 3: Sum of Array Elements

#include<iostream>
using namespace std;

int main () {
    int array[5];
    int sum = 0;

    for(int i=0; i<5; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> array[i];
    }
    for(int i=0; i<5; i++){
        sum=sum+array[i];
    }
    
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}