#include<iostream>
using namespace std;
class con{
     public:
    int a,b;
   
    con(){
        a=10;
        b=9;
    }
    void printData(){
        cout<<"sum : "<<a+b<<endl; 
    }
};
int main(){
    con obj;
    obj.printData();
}