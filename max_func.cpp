//finding maximum no. from given inputs using function
#include<iostream>
using namespace std;

int Max(int x,int y,int z){
    int max;

    if(x>y && x>z){
        max=x;
    }
    else if(y>x && y>z){
        max=y;
    }
    else{
        max=z;
    }

    return max;
}

int main(){
    int n1,n2,n3;
    int max_num;

    cout<<"Enter three numbers : ";
    cin>>n1>>n2>>n3;

    max_num=Max(n1,n2,n3);

    cout<<"Maximum number is: "<<max_num;

    return 0;
}