#include<iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    int *ptr=new int[size];
    
    cout<<"Enter arrray elements: ";
    
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
    
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }

    return 0;
}