#include<iostream>
using namespace std;
 
class Rectangle{
    private:

    int length,breadth;

    public:

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
    Rectangle r1,r2;

    r1.set_data(6,4);
    r2.set_data(2,5);

    cout<<"Area of r1: "<<r1.area()<<endl;
    cout<<"Perimeter of r2: "<<r2.perimeter();

    return 0;
}