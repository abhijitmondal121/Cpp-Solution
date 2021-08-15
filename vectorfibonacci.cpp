#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main(){
     vector<int>arr;
    cout<<"Enter the range : ";
    int n;
    cin>>n;
    int a=0,b=1,c=0;
    for (int i=1;i<=n;i++){
        a=b;
        b=c;
        c=a+b;
        // cout<<" "<<b;
        arr.push_back(b);
    }

   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }


}