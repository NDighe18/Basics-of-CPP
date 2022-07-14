//prgrm showing basic concept of array using -
//addition of all elements of array
#include<iostream>
using namespace std;

int main(){
    int arr1[10],i;
    int sum=0;

    cout<<"Enter 10 elements in array:";
    for(i=0;i<10;i++){
        cin>>arr1[i];
    }

    for(i=0;i<10;i++){
        sum=sum+arr1[i];
    }
    cout<<"The sum of given array elements is: "<<sum;

    return 0;
}