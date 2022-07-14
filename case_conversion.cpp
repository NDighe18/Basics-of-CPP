//changing string to upper case or lower case as desired
#include<iostream>
#include<string.h>
using namespace std;                                  //65-90 A-Z,97-122 a-z

int main(){
    char str[100];
    int len,choice;

    cout<<"Enter a string : ";
    cin.get(str,100);

    cout<<"\n";

    cout<<"Choose from below :" <<endl;
    cout<<"1.Convert string to uppercase ."<<endl;
    cout<<"2.Convert string to lowercase ."<<endl;
    cout<<"Enter choice number : ";
    cin>>choice; 

    len=strlen(str);

    if(choice==1){
        for(int i=0;i<len;i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
    }

    else if(choice==2){
        for(int i=0;i<len;i++){
        if(str[i]>=65 && str[i]<=90){
            str[i]+=32;
        }
    }
    } 

    cout<<"The string after conversion is: "<<str;
    return 0;

}