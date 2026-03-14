//Problem 13: Count Positive Numbers
#include<iostream>
using namespace std;

int main(){

    int array[5] = {1, -2, 3, -4, 5};
    int count=0;
    for(int i=0; i<5; i++){
        if(array[i]>0){
            count++;
        }
    }
    cout<<"Count of Positive numbers:"<<count;
    return 0;
}