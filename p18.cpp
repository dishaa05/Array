//Problem 18: Count Occurrences of a Number
#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int count=0;
    for(int i=0; i<5; i++){
        if(arr[i]==3){
            count++;
        }
    }
    cout<<"Count of occurrences of 3:"<<count;
    return 0;
}
