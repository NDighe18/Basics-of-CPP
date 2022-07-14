#include<iostream>
using namespace std;

int main(){
    int size,l,h,mid,len,key;
    
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr1[size];

    cout<<"Enter the elements for array: ";      //the elements for binary search in array should be sorted

    for(int i=0 ; i<size ; i++){
        cin>>arr1[i];
    }

    l=0,h=size-1;

    cout<<"Enter the element to be searched from array :";
    cin>>key;

    while(l<=h){
        mid=(l+h)/2;

        if(key==arr1[mid]){
            cout<<"Element "<<key<<" found at index ->"<<mid;
            return 0;
        }
        else if(key<arr1[mid]){
            h=mid-1;
        }
        else if(key>arr1[mid]){
            l=mid+1;
        }

    }
    cout<<"Element "<<key<<" not found in array";

        return 0;
}
 