//pass by refrence method-here changes made to formal parameter also occur in actual parameter
#include<iostream>
using namespace std;

int swap(int &n1,int &n2){          
    int temp;

    temp=n1;
    n1=n2;
    n2=temp;
    
} 

int main(){
    int n1,n2;

    cout<<"Enter two numbers : ";
    cin>>n1>>n2;

    swap(n1,n2); 
    //values of actual paramters are also changed 
    cout<<"Value of n1 after calling swap function in main: "<<n1<<endl;
    cout<<"Value of n2 after calling swap function in main: "<<n2;
    
    
    return 0;
}