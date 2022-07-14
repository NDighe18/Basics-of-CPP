//pgrm to show concept of default constructor
#include<iostream>
using namespace std;

class Default{

    public:

    Default(){
        cout<<"Default constructor called!"<<endl;
    }
};

int main(){
    Default d1,d2;

    return 0;

}