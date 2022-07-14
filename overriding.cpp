//program to display concept of function overriding
#include<iostream>
using namespace std;

class parent{
    public:

    void display(){
        cout<<"Func of parent class"<<endl;
    }
};

class child:public parent{
    public:

    void display(){
        cout<<"Func of child class"<<endl;
    }
};

int main(){
    child c1,c2;

    c1.display();
    c2.parent::display();   //accessing overriden function through scope resolution operator

    return 0;
}