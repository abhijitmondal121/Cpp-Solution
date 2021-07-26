#include<iostream>
using namespace std;


class base{
    public:
    int a;
    base(){}
    base(int x){
        a=x;
        cout<<"base class "<<a<<endl;
    }
    base(base &ob){
        int x =ob.a;
        cout<<"base class "<<x<<endl;
    }
};

int main(){
    base x,y(45);
    base z1(y);
    return 0;
}