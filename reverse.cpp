//prgram to reverse a string array
#include<iostream>
#include<string.h>
using namespace std;

int main()
{

char input[50],temp;
int len,left,right;
cout<<"Enter a string to print it's reverse:";
gets(input);                             //use gets to take input of string

len=strlen(input);

left=0,right=len-1;

for(int i=left; i<right ; i++)
{

temp=input[i];
input[i]=input[right];                  // swapping charactrers to reverse the string
input[right]=temp;
right--;

}

cout<<"The reversed string is: "<<input;
return 0;

}





