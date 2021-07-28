#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A& setData(int a){
        this->a=a;
        return *this;
    }
    void getdata(){
        cout<<"value "<<a<<endl;
    }
};

int main(){
    A a;
    a.setData(4).getdata();
    // a.getdata();
}