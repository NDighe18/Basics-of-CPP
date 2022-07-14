//basic if else concept
#include<iostream>
using namespace std;

//finding max among three numbers
int main(){
int n1,n2,n3;

cout<<"Enter three numbers:";
cin>>n1>>n2>>n3;

if(n1>n2 && n1>n3)
cout<<"Max number is:"<<n1;
else if(n2>n1 && n2>n3)
cout<<"Max number is:"<<n2;
else
cout<<"Max number is:"<<n3;

return 0;
}