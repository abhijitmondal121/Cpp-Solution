#include<iostream>
using namespace std;

void con(string x,string y){
    cout<<x+y<<endl;
}

int main(){
    string a,b;
    cout<<"Enter the 1st string : "<<endl;
    cin>>a;
    cout<<"Enter the 2nd string : "<<endl;
    cin>>b; 
    con(a,b);

}