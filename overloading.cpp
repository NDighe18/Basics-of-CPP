//program to overload addition operator for complex number
#include<iostream>
using namespace std;

class Complex{
    public:

    int real,imaginary;

    Complex operator+(Complex c){
        Complex temp;

        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }

    void set_data(int real,int imaginary){
        this->imaginary=imaginary;
        this->real=real;
    }

    void show_data(){
        cout<<real<<"+i"<<imaginary;
    }
};

int main(){
    Complex c1,c2,c3;
    

    c1.set_data(5,3);
    c2.set_data(2,4);

    c1.show_data();
    cout<<" + ";
    c2.show_data();
    c3=c1+c2;
    cout<<"\nThe sum is: ";
    c3.show_data();

    return 0;

}


    
