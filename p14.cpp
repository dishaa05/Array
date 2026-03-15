//Problem 14: Count Negative Numbers

#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,-4,5,-2,8};
    int count=0;
    for(int i=0; i<5; i++){
        if(arr[i]<0){
            count++;
        }
    }
    cout<<"count of negative numbers:"<<count;
    return 0;
}