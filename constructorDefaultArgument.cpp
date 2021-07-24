#include<iostream>
using namespace std;
class con2{
     
    int a,b,c;
    public:
    con2(int num1,int num2=10,int num3=5){
        a=num1;
        b=num2;
        c=num3;
    }
    void printData(){
        cout<<"sum : "<<a+b+c<<endl; 
    }
};
int main(){
    con2 obj(10,34);
    obj.printData();
}