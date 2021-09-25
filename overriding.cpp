#include<iostream>
using namespace std;

class A{
    public:
    
    virtual void print(){
        cout<<"Base class : "<<endl;
    }
};

class B:public A{
    
    public:
    void print(){
        cout<<"Derive class : "<<endl;
    }
};

int main(){
    A *obj=new B();
    obj->print();
}