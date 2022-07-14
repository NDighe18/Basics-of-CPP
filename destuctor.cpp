/* Program to demonstrate concept of desturctor */

#include<iostream>
using namespace std;

class Demo{
    public:

    Demo(){
        cout<<"Constructor called"<<endl;
    }

    ~Demo(){
        cout<<"Destructor called"<<endl;
    }
};

void fun(){

    Demo d;

}

int main(){
    fun();           //destructor is automatically called when scope of function 'fun' ends

    return 0;
}

