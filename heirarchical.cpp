#include<iostream>
using namespace std;

class A{
    int a;
    
    public:

    void setdata(int x){
        a=x;
    }

    void display(){
        cout <<"value is : "<<a<<endl;
    }
};

class B: public A{

};

class C: public A{

};

int main(){
    B bobj;
    bobj.setdata(1);
    bobj.display();
    A aobj;
    aobj.setdata(2);
    aobj.display();
    bobj.display();      /*derived classes have different copies of data member and functions ,
                           thus changes made in one derived class wont affect to other*/                         

    return 0;
}