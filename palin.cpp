#include<iostream>
#include<string.h>
using namespace std;

int main(){
  char str1[30];
  int i,len;
  int flag=0;

  

  cout<<"Enter a string to check if it is a Palindrome: ";
  gets(str1);

  len=strlen(str1); 
  for(i=0;i<len;i++){
     if(str1[i]!=str1[len-i-1]){
        flag=1;
        break;
    }
  }

    if(flag==1){
      cout<<str1<<" is not a Palindrome"<<endl;
    }
    else{
    cout<<str1<<" is a Palindrome"<<endl;
    }
  return 0;
}