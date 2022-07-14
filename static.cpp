//program to show concept of static variable
#include<iostream>
using namespace std;

int fun(){
    static int a=0; //They have local scope but remain in memory thru out the execution of program
    int b=0;

    a++;
    b++;

    cout<<a<<" "<<b;   /*after runing the code it can be observed 
    how changes in value of a static variable occur vs a normal variable in a function*/
}

int main(){
    for (int i=0;i<5;i++){
        fun();
        cout<<"\n";
    }

    return 0;
}