//program to show basic concept of pointer
#include<iostream>
using namespace std;

int main(){
    int x=59;
    int *p;            //pointer declaration
    p=&x;              //pointer p pointing to data var x,initialization of pointer

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;     //Derefrencing-Accessing the data present at the address where pointer is pointing.

return 0;
}