//program to demonstrate concept of static data variables in a class
#include<iostream>
using namespace std;

class Test{

    public:
    int a=0;
    static int count;

    Test(){
        a++;
        count++;
    }

};

int Test::count=0; //declaration outside the class using scope resolution operator

int main(){
    Test t1;
    cout<<"For t1 value of a and count are: a->"<<t1.a<<"  count->"<<t1.count<<endl;

    Test t2;
    cout<<"For t1 value of a and count are: a->"<<t1.a<<"  count->"<<t1.count<<endl;

    cout<<"count ->"<<Test::count;  //static mem can also be accessed without any object of class


    /*t1 and t2 have their own different copies of var 'a' but share same copy of 
    static var 'count'*/

    return 0;
}