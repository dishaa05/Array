//Problem 5: Find Maximum Element

#include<iostream>
using namespace std;

int main(){
    int arr[]={5,6,9,4,8};

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}