/* if the object is created by using new or the constructor uses new to allocate memory
which resides in the heap memory,the destructor should use delete to free the memory*/

#include<iostream>
using namespace std;

class Demo{
    public:
    int*ptr;

    Demo(){
        ptr=new int[10];
        cout<<"Constructor of demo"<<endl;
    }

    ~Demo(){
        delete []ptr;           /*in the classes where you are dynamically allocating the memory inside the constructor or anywhere
                                inside the class, then you must release that memory inside the destructor
                                when the object is goin out of school or when the object is deleted to avoid memory leak ! */
        cout<<"Destructor of demo"<<endl;
    }
};

void func_1(){
    Demo*p=new Demo();
}

void func_2(){
    Demo*p2=new Demo();
    delete p2;
}

int main(){
    func_1();      /*we will see here that since the memory was allocated
                    dynamically it needs to be deleted explicitly*/
    
    func_2();       /*destructor callled explicitly in func_2 here*/
    
    Demo obj;
    
    return 0;
}