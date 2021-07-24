#include<iostream>
#include<cmath>
using namespace std;

void arm(int n){
    int c,sum=0,r;
            int temp=n,count=0;
        while(temp!=0){
            count++;
            temp/=10;
        }
        c=n;
        while(n!=0)
        {
            r=n%10;
            n=n/10;

            int a= (int)pow(r,count);
            sum=sum+(a);
        }
        if(c==sum)
            cout<<"it is armstrong";
        else
            cout<<"it is not armstrong"; 
}

int main(){
   int a; 
cout<<"enter the number:"<<endl;
cin>>a;
arm(a);
}