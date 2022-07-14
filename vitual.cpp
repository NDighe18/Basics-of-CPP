//program to show concept of virtual base class
#include<iostream>
using namespace std;

class Demo{
    int a;

    public:

    void set_data(int x){
        a=x;
    }

    void display(){
        cout<<"The value is: "<<a<<endl;
    }
};

class A : public  virtual Demo{

};

class B : public virtual Demo{

};

class C : public A, public B{

};

int main(){
    C cobj;
    cobj.set_data(1);
    cobj.display();

    return 0;
}