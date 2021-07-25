#include<iostream>
using namespace std;

class Gparent{
    public:
    Gparent(){
        cout<<"This is Gparent class : "<<endl;
    }

};

class parent : public Gparent{
    public:
    parent(){
        cout<<"This is parent class : "<<endl;
    }

};
class child : public parent{

    public:
    child(){
        cout<<"This is child class : "<<endl;
    }

};

int main(){
    child obj;
    

}