//program to show concept of base class pointer and derived class objecct
#include<iostream>
using namespace std;

class base{
    public:

    void fun(){
        cout<<"fun of base"<<endl;
    }
};

class derived:public base{
    public:

    void fun(){
        cout<<"func of derived"<<endl;
    }
};

int main(){
    derived d1;

    base* ptr= &d1;

    ptr->fun();      //thrgh base class pointer only functions of base class can be accessed

    return 0;
}

