#include<iostream>
using namespace std;
class con2{
     
    int a,b;
    string x,y;
    float c,d;
    public:
    con2(int num1,int num2){
        a=num1;
        b=num2;
    }
    con2(float num1,float num2){
        c=num1;
        d=num2;
    }
    con2(string num1,string num2){
        x=num1;
        y=num2;
    }
    void printData(){
        cout<<"sum : "<<a+b<<endl; 
    }
    void printData1(){
        cout<<"string : "<<x+y<<endl; 
    }
        void printData2(){
        cout<<"sum : "<<c+d<<endl; 
    }
};
int main(){
    con2 obj(9.2f,2.3f);
    obj.printData2();
    con2 ob1(9,2);
    ob1.printData();
    con2 obj2("Abhijit ","Mondal");
    obj2.printData1();
}