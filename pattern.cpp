#include<iostream>
using namespace std;           /*       *        <-printing this pattern for desired number of rows
                                       **
                                      ***      */
int main(){
    int i,j,rows;

    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(i=rows;i>0;i--){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=rows;k>=i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}