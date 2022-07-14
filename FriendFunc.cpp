//program to demomstrate concept of friend function
//finding min of 3 numbers using friend function
#include<iostream>
using namespace std;

class Min{
    int a,b,c;

    public:
   
    void setdata(){
        cout<<"Enter 1st number: ";
        cin>>a;
        cout<<"Enter 2nd number: ";
        cin>>b;
        cout<<"Enter 3rd number: ";
        cin>>c;
    }

    friend void find_min(Min &m);
};

void find_min(Min &m){
    int minimum;

    if(m.a<m.b && m.a<m.c){
        minimum=m.a;
    }
    else if(m.b<m.a && m.b<m.c){
        minimum=m.b;
    }
    else{
        minimum=m.c;
    }

    cout<<"Minimum number is: "<<minimum<<endl;

}

int main(){
    Min obj1;

    obj1.setdata();

    find_min(obj1);

    return 0;
}