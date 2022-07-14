//program to show concept of constructor
#include<iostream>
using namespace std;

class Rectangle{
    private:

    int length,breadth;

    public:

    Rectangle(){    //non-parametrized constructor also here acts as default constructor
        length=1;
        breadth=1;
    }

    Rectangle(int length,int breadth){     //parametrized constructor
        set_data(length,breadth);
    }

    Rectangle(Rectangle &r){              //copy constructor  
        length=r.length;
        breadth=r.breadth;
    }

    void set_data(int length,int breadth){

        if(breadth>0){
        this->breadth=breadth;}

        else if(breadth<0){
            cout<<"Invalid input-Breadth cannot be negative!";
        }
        
        if(length>0){
        this->length=length;}

        else if(length<0){
            cout<<"Invalid input-Length cannot be negative!";
        }
    }

    int area(){
            return length*breadth;
        }

    int perimeter(){
            return 2*(length+breadth);
        }

} ;

int main(){

    Rectangle r1(10,5);
    cout<<"Area of r1: "<<r1.area()<<endl;
    Rectangle r2(r1);                            // creating r2 as copy of r1
    cout<<"Area of r2: "<<r2.area()<<endl;

    return 0;
}