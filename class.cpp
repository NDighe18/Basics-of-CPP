//program to show concept of object and class
#include<iostream>
using namespace std;

class Rectangle{
    public:         //we need to make it public else in a class everything will be private by default

    int length,breadth;   //data members

    int calculate_area(){
        return length*breadth;
    }

    int calculate_perimeter(){
        return 2*(length+breadth);
    }

};

int main(){

    Rectangle r1;  //creating object of class rectangle

    r1.breadth=10;   //accessing data members through dot operator and assigning them values
    r1.length=5;
    
    cout<<"The given input length and breadth of rectangle are: "<<r1.length<<" "<<r1.breadth<<endl;
    cout<<"Area is: "<<r1.calculate_area()<<endl;
    cout<<"Perimter is: "<<r1.calculate_perimeter();

    return 0;

}