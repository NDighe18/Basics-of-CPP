//using pass by value method to pass arguments to a function
#include<iostream>
using namespace std;
 
int swap(int n1,int n2){          //formal parameters
    int temp;

    temp=n1;
    n1=n2;
    n2=temp;

    cout<<"Value of n1 after swaping in swap function: "<<n1<<endl;
    cout<<"Value of n2 after swaping in swap function: "<<n2<<endl;
    
} 

int main(){
    int n1,n2;

    cout<<"Enter two numbers : ";
    cin>>n1>>n2;

    swap(n1,n2);  //actual parameters                //pass by value method

    cout<<"Value of n1 after calling swap function in main: "<<n1<<endl;
    cout<<"Value of n2 after calling swap function in main: "<<n2;
    
    //the values of n1 and n2 do not actually change here
    return 0;
}