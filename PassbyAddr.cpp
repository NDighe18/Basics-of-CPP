//using pass by address method to pass arguments to a function
#include<iostream>
using namespace std;

int swap(int *a,int *b){
    int temp;
     
    temp=*a;
    *a=*b;
    *b=temp; 

}

int main(){
    int n1,n2;

    cout<<"Enter two numbers for n1 and n2 - "<<endl;
    cout<<"Enter the value of n1: ";
    cin>>n1;
    cout<<"Enter the value of n2: ";
    cin>>n2;
    swap(&n1,&n2);       //passing addresses as arguments to pointer

    cout<<"Values of n1 and n2 after calling swap function are - "<<endl;
    cout<<"Value of n1 is: "<<n1<<endl;
    cout<<"Value of n2 is: "<<n2;

    return 0;

}