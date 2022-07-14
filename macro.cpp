//program to illustrate concept of macros

#include<iostream>
using namespace std;
#define PI 3.1425                  //macro defintion here used for defining a constant 'PI'
#define Area(r) (PI*r*r)          //function macro

int main(){
    int radius;

    cout<<"value of π here is: "<<PI<<endl;
    
    cout<<"Enter the radius of circle to calculate it's area: ";
    cin>>radius;

    cout<<"The area of circle is: "<<Area(radius);

    return 0;

}
