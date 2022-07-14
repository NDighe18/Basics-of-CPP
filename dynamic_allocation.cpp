// Dynamic allocation of memory through pointer 
#include<iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    int *p = new int[size];

    cout<<"Enter elements for array: ";
    for(int i=0;i<size;i++){
        cin>>*(p+i);
    } 

    cout<<"The array is : ";
    for(int i=0;i<size;i++){
        cout<<*(p+i)<<" ";
    }

    delete []p;    //Delete operator deallocates memory from heap.
    //Pointer to object is not destroyed, value or memory block pointed by pointer is destroyed .  

    cout<<"\n";
    cout<<"Enter new size of array: ";   //allocating a new array of desired size to same pointer
    cin>>size;

    p = new int[size];
    
    cout<<"Enter elements for new array: ";
    for(int i=0;i<size;i++){
        cin>>*(p+i);
    } 

    cout<<"The new array is : ";
    for(int i=0;i<size;i++){
        cout<<*(p+i)<<" ";
    }

    return 0;
}