#include<iostream>
using namespace std;

void fac(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    cout<<"the factorial of "<<x<<" is : "<<f;
}

int main(){
   int a; 
cout<<"enter the number:"<<endl;
cin>>a;
fac(a);
}