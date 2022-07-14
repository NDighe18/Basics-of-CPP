//program to show concept of default copy constructor
#include<iostream>
using namespace std;

class sample{
    int a;

    public:

    void set_value(int x){
        a=x;
    }

    void display(){
        cout<<"Value is: "<<a<<endl;        
    }
};

int main(){
    sample s1,s3;
    s1.set_value(1);
    s1.display();
    sample s2=s1;
    s2.display();

    s3.set_value(3);
    s3.display();
    s1=s3;
    s1.display();

    return 0;

}