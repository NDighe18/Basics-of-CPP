#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,3,5,7,8};          //initializing array without specifying size of array
   

    for(auto &x:arr1){
        cout<<++x<<" ";
    }
    cout<<"\n";
 cout<<arr1[1];
return 0;
}