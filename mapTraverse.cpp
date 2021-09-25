#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

void display(vector<string> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";+
    }
    cout<<endl;
}




int main(){
    vector<string>arr1;
    vector<string>arr2;
    int size;
    string element;
    
    cout<<"enter the size :"<<endl;
    cin>>size;
    cout<<"enter the value : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        arr1.push_back(element);
        
    }
    
    cout<<"enter the value : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        arr2.push_back(element);
        
    }
    
    cout<<"output1 : "<<endl;
    display(arr1);
    cout<<"output2 : "<<endl;
    display(arr2);
    
    
    

    bool flag;
    for(int i=0;i<size;i++){
        
            map<char,bool>m;
            string str1=arr1[i];
        
        for(int j=0;j<str1.length();j++){
           m[str1[j]]=true;
        }
        flag=false;
        string str2=arr2[i];
        for(int k=0;k<str2.length();k++){
            
            if(m.find(str2[k])!=m.end()){
                flag=true;
                break;
            }
        }
        
        if(!flag){
            cout<<"No "<<endl;
        }
        else{
            cout<<"YESS "<<endl;
        }
        
        
    }
    
    

    //  map<string,int>::iterator itr;
    //  for (itr = marksMap.begin(); itr !=marksMap.end(); itr++)
    //  {
    //     cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    //  }
     
    return 0;
}