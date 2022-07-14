//use of virtual function in base class
#include<iostream>
using namespace std;

class parent{
    public:

    virtual void func(){   //due to use of virtual func ,base class func will be overriden
        cout<<"Func of base class"<<endl;
    }
};

class child:public parent{
    public:

    void func(){
        cout<<"Func of derived class"<<endl;
    }
};

int main(){
    child c;

    parent *ptr = &c;  //base class pointer pointing to derived class object

    ptr->func();

    return 0;
}