//Problem 15: Average of Array Elements

#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    double average=sum/5.0;
    cout<<"average:"<<average;
    return 0;
}