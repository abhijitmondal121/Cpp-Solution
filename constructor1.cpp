#include<iostream>
using namespace std;
class con{
    
    int a,b;
     public:
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