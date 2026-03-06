//Problem 6: Find Minimum Element

#include<iostream>
using namespace std;

int main(){

    int arr[]={9,3,5,7,2};

    int minElement=arr[0];

    for (int i=1; i<5; i++){
        if(arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Minimum element: " << minElement << endl;

    return 0;
}