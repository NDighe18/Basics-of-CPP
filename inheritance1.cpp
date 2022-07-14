//program to show concept of inheritence
#include<iostream>
using namespace std;

class parent{
    public:

    int p;

    parent(){
       cout<< "Default of parent class"<<endl;
    }

    parent(int x){
        p=x;
       cout<< "Param of parent class "<<p<<endl;
    }
};

class child : public parent{
    public:
     
    int c;

    child(){
        cout<<"Default of child class"<<endl;
    }

   /* child(int y){
        cout<<"Param of child class "<<y<<endl;
    }*/

    child(int z, int c) : parent(z){
        cout<<"Param of child class "<<c<<endl;
    }
};

int main(){
    child c1(1,2);
    child c2;

    return 0;
}
