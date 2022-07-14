//finding max and min element from an array
#include<iostream>
using namespace std;

int MaxMin(int arr[],int size){
    int max=0,min=0;

    for(int i=0;i<size;i++){
        if(arr[i]>arr[max]){
            max=i;
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }

    cout<<"Max is : "<<arr[max]<<endl;
    cout<<"Min is : "<<arr[min];

    return 0;
}

int main(){
    int size,result;

    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];

    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    result=MaxMin(arr,size);
    
    return 0;
}