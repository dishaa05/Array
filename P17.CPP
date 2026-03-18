//Problem 17: Find Position of Minimum
#include<iostream>
using namespace std;

int main(){

    int arr[5]={3,6,8,9,1};
    int minPosition=0;
       for(int i=0; i<5; i++){
          if(arr[i]<arr[minPosition]){
              minPosition=i;
          }
      }
    cout<<"Position of minimum element:"<<minPosition;
    return 0;
}
