//Problem 4: Count Elements in Array

#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};
    int count=sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of elements in array: "<<count<<endl;
return 0;
}
