#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> V){
    // cout<<"Size : "<<V.size()<<endl;
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;

}





int main(){
    vector<int>V;
    int n;
    cout<<"Enter the range: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        V.push_back(x);
    }

        printVec(V);
 

}
