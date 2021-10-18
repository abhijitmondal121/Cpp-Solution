#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the range : "<<endl;
    int n;
    cin>>n;
      unordered_map<int,int >ump;
      int arr[n];

    cout<<"Enter the value : "<<endl;
    for (int i=0;i<n;i++){
        // int t;
        // cin>>t;
         cin>>arr[i];
        // arr.push_back(t);
    }
    // sort(arr.begin(),arr.end());
        for (int i=0;i<n;i++){
           ump[arr[i]]++;
        }


             for (auto x:ump){
                cout<<x.first<<" "<<x.second<<endl;
            }

   


}