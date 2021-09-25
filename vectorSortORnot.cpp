#include<bits/stdc++.h>
using namespace std;


void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}




int main(){
    // int count=0,n;
    // cout<<"Enter the range : "<<endl;
    // cin>>n;
    // vector<int>num(n);
    // for(int i=0;i<num.size();i++){
    //     cin>>num[i];
    // }
    
    // for(int i=0;i<num.size();i++){
    //     if(num[i]==1){
    //         num.erase(num.begin()+i);
    //         count++;
    //         i--;
    //     }
    // }
    
    // for(int i=0;i<count;i++){
    //     num.push_back(1);
    //     count--;
    // }
    
    // for(int i=0;i<n;i++){
    //     cout<<num[i]<<" ";
    // }
    
    // int n;
    // cout<<"Enter the range : "<<endl;
    // cin>>n;
    // vector<int>num(n);
    // cout<<"Enter the value : "<<endl;
    // for(int i=0;i<num.size();i++){
    //     cin>>num[i];
    // }

    // cout<<"value is :"<<endl;
    // for(int i=0;i<num.size();i++){
    //     cout<<num[i]<<" ";
        
    // }
    
    
    
    // vector<int>num;
    // int size,element;
    // cout<<"Enter the size : "<<endl;
    // cin>>size;
    // cout<<"Enter the number : "<<endl;
    // for(int i=0;i<size;i++){
    //     cin>>element;
    //     num.push_back(element);
    // }
    
    // for(int i=0;i<size;i++){
    //     cout<<num[i]<<" ";
    // }
    
    // display(num);
    
    // vector<int>num;
    // int size,element;
    // cout<<"Enter the size : "<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cin>>element;
    //     num.push_back(element);
    // }
    
    
    // vector<int>num1(size);
    // cout<<"enter the value of second vector :"<<endl;
    // for(int i=0;i<num1.size();i++){
    //     cin>>num1[i];
    // }
    
    
    
    // vector<int>num2(size);
    // cout<<"output : "<<endl;
    // for(int i=0;i<num2.size();i++){
    //     num2[i]=num[i]+num1[i];
    // }
    // display(num2);
    
    
    
    vector<int>vec1;
    int size,val;
    bool f=false;
    cout<<"Enter the size : "<<endl;
    cin>>size;
    cout<<"Enter the number : "<<endl;
    for(int i=0;i<size;i++){
        cin>>val;
        vec1.push_back(val);
    }
    
    int l=0;
    while(l<size-1){
        if(vec1[l]>vec1[l+1]){
            f=true;
            break;
        }
        l++;

    }
    
    
    if(f==true){
        cout<<"Array is not sorted : "<<endl;
    }
   else{
        cout<<"Array is sorted : "<<endl;
       }
    
}



