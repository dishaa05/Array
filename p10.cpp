//Problem 10: Sum of Even Numbers

#include<iostream>
using namespace std;

int main(){

    int array[5] = {1, 2, 3, 4, 5};
    int sum=0;
    for(int i=0; i<5; i++){
        if(array[i]%2==0){
            sum+=array[i];
        }
    }
    cout<<"Sum of Even numbers:"<<sum;
    return 0;
}