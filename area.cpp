#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    float area,l,b;
    cout<<"Enter length and breadth of triangle:";
    cin>>l>>b;
    area=0.5*l*b;
    cout<<"Area of triangle is:" <<area;
    return 0;

}