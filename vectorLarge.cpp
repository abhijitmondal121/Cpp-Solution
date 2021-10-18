#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    

    vector<int>arr(n);
    cout<<"enter the number : "<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        
    }

    for(int i=0;i<n-1;i++)
    {
            
            if(arr[i]>=arr[i+1]){
              cout<<"Array is not incresing order"<<endl;
                return 0;
            }

        

        
    }
    
   
        cout<<"Array is incresing order"<<endl;
    
        return 0;
   
   
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }


}