#include<iostream>
using namespace std;

class Distance{
    int km,m;

    public:

    void set_distance(int km,int m){
        this->km=km;
        this->m=m;
    }

    Distance operator+(Distance d){
        Distance temp;

        temp.km=km+d.km;
        temp.m=m+d.m;

        while(temp.m>=1000){
            temp.m-=1000;
            temp.km+=1;
        }

        return temp;
    }

    void display(){
        cout<<km<<"km"<<" "<<m<<"m";
    } 

};

int main(){
    Distance d1,d2;
    int km1,m1,km2,m2;

    cout<<"Enter the distance in 'km' amd 'm' for d1:  "<<endl;
    cin>>km1>>m1;

    d1.set_distance(km1,m1);

    cout<<"Enter the distance in 'km' amd 'm' for d2:  "<<endl;
    cin>>km2>>m2;

    d2.set_distance(km2,m2);

    cout<<"The total distance is: ";

    Distance d3=d1+d2;

    d3.display();

    return 0;


}