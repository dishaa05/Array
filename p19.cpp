//Problem 19: Copy Array to Another Array
#include<iostream>
using namespace std;

int main(){

    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for(int i=0;i<5;i++){
        arr2[i]=arr1[i];
    }
    cout<<"Elements of arr2=";
    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
return 0;
}