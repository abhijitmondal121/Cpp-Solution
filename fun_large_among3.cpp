#include<iostream>
using namespace std;

void large(int x,int y,int z){
    if(x>y && x>z)
    {
        cout<<"large : X : "<<x<<endl;
    }
    else if(y>z && y>x){
        cout<<"large : Y : "<<y<<endl;
    }
    else{
        cout<<"large : Z : "<<z<<endl;
    }
}

int main(){
    int a,b,c;
    cout<<"enter 1st number : "<<endl;
    cin>>a;
    cout<<"enter 2nd number : "<<endl;
    cin>>b;
    cout<<"enter 3rd number : "<<endl;
    cin>>c;
    large(a,b,c);
}