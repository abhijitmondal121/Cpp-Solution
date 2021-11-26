



#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"enter the range : "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the value : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the output : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
