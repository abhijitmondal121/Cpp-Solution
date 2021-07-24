#include<iostream>
using namespace std;
class con2{
     
    int a,b;
    public:
    con2(int num1,int num2){
        a=num1;
        b=num2;
    }
    void printData(){
        cout<<"sum : "<<a+b<<endl; 
    }
};
int main(){
    con2 obj(10,34);
    obj.printData();
}