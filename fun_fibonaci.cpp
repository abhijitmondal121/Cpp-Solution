#include<iostream>
using namespace std;

void fibo(int x){
    int a=0,b=1,c=0;
    for (int i=1;i<=x;i++){
        a=b;
        b=c;
        c=a+b;
        cout<<" "<<b;
    }
}
int main(){
    int a;
    cout<<"enter the number :"<<endl;
    cin>>a;
    fibo(a);
}