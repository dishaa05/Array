// Problem 8: Count Even Numbers

#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int count=0;

    for (int i=0; i<9; i++){
        if (arr[i]%2==0){
            count++;

        }
    }
    cout << "Count of even numbers: " << count << endl;
    return 0;
}