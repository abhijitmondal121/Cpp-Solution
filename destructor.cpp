#include<iostream>
using namespace std;


class base{
    public:
    int a=0;
    base(){
        a++;
        cout<<"base class constructor "<<a<<endl;
    }
     ~base(){
       
        cout<<"base class destructor "<<a<<endl;
         a++;
    }
    

};

int main(){
    base x;
    
    return 0;
}