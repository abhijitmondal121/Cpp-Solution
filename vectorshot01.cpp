#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the range : "<<endl;
    int n;
    cin>>n;
      vector<int>arr(n);
      vector<int>arr1;
    cout<<"Enter the value : "<<endl;
    for (int i=0;i<n;i++){
        // int t;
        // cin>>t;
         cin>>arr[i];
        // arr.push_back(t);
    }
    // sort(arr.begin(),arr.end());
        for (int i=0;i<n;i++){
            if(arr[i]==0){
                arr1.push_back(arr[i]);
                // cout<<arr[i]<<" ";
            }
        }
        // cout<<arr[i]<<" ";
          for (int i=0;i<n;i++){
            if(arr[i]==1){
                arr1.push_back(arr[i]);
                // cout<<arr[i]<<" ";
            }   
        }


             for (int j=0;j<n;j++){
                cout<<arr1[j]<<" ";
            }

   


}