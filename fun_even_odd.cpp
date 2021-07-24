#include<iostream>
using namespace std;

void eo(int x){
    if(x%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"odd "<<endl;
    }
}

int main(){
    int a;
    cout<<"enter a number : "<<endl;
    cin>>a;
    eo(a);
}