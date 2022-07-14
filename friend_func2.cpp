//Demonstrating how friend function can act as a bridge between 2 classes
#include<iostream>
using namespace std;

class B;

class A{
    int a;

    public:

    void set_data(){
        cout<<"Enter 1st number: ";
        cin>>a;
    }

    friend void Multiply(A,B);

};

class B{
    int b;

    public:

    void set_data(){
        cout<<"Enter 2nd number: ";
        cin>>b;
    }

    friend void Multiply(A,B);

};

void Multiply(A obj1, B obj2){
    int result;

    result=(obj1.a)*(obj2.b);

    cout<<obj1.a<<"*"<<obj2.b<<"="<<result;
    
}

int main(){
    A a;
    B b;

    a.set_data();
    b.set_data();

    Multiply(a,b);

    return 0;

}


