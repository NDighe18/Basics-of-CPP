//prgrm to show concept of scope resolution operator
#include<iostream>
using namespace std;

class Example{
    static int n1;

    public:

    static int n2;

    void func(int n1){
        cout<<"Value of local variable n1: "<<n1<<endl;
        cout<<"value of static variable n1: "<<Example::n1<<endl;
    }
};

int Example::n1=1;
int Example::n2=2;

int main(){
    int n1=3;

    Example e;
    e.func(n1);

    cout<<"value of static variable n2: "<<Example::n2;        
    
    return 0;

}

