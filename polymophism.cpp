//polymorphism through function overriding and pure virtual functions
#include<iostream>
using namespace std;

class car{
    public:

    virtual void start()=0;   //pure virtual functions

    virtual void stop()=0;
};

class Innova : public car{
    public:

    void start(){
        cout<<"Innova started "<<endl;
    }

    void stop(){
        cout<<"Innova stopped"<<endl;
    }
};

class RangeRover : public car{
    public:

    void start(){
        cout<<"RangeRover started "<<endl;
    }

    void stop(){
        cout<<"RangeRover stopped"<<endl;
    }
};

int main(){
    car *c=new Innova();

    c->start();

    c=new RangeRover();

    c->start();

    return 0;

}
