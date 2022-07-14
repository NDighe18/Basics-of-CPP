//basic prgrm to show concept of function overloading
#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

float add(float a,float b){
    return a+b;
}


int main(){
    int choice;

    cout<<"Enter the data type on which you want to perform addition: "<<endl;
    cout<<"1.Integer"<<endl;
    cout<<"2.Float"<<endl;
    cin>>choice;

    if(choice==1){
        int n1,n2,sum;
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        sum=add(n1,n2);
        cout<<"Sum is: "<<sum;
         
    }

    if(choice==2){
        float n1,n2,sum;
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        sum=add(n1,n2);
        cout<<"Sum is: "<<sum;
         
    }

    return 0;
}