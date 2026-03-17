//Problem 16: Find Position of Maximum

#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,8,4,5,3};
    int maxPosition=0;
    for(int i=0; i<5; i++){
        if(arr[i]>arr[maxPosition]){
            maxPosition=i;
        }
    }
    cout<<"Position of maximum element:"<<maxPosition;
    return 0;
}