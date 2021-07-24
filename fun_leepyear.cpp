#include<iostream>
using namespace std;

void leep(int x){
    if(x%4==0&&x%100!=0 || x%400==0){
        cout<<"ther year is leap year :"<<endl;
    }
    else
    cout<<"ther year is not leepyear";
}

int main(){
    int a;
    cout<<"enter the year :"<<endl;
    cin>>a;
    leep(a);
}