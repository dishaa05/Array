//Problem 12: Search for a Number
#include<iostream>
using namespace std;

int main(){

    int arr[5]={5,6,7,8,9};
    int number;

    cout<<"Enter a number to search:";
    cin>>number;

    for(int i=0; i<5; i++){
        if(arr[i]==number){
            cout<<"number found";
            return 0;
        }

    }
    cout<<"number not found";

return 0;
}