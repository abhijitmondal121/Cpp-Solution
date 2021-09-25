#include<bits/stdc++.h>
using namespace std;
void display(list<int> &n){
    list<int>::iterator it;
    for(it=n.begin();it!=n.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}



int main(){
    list<int>l;
    l.push_back(51);
    l.push_back(1);
    l.push_back(6);
    l.push_back(5);
    l.push_back(15);
    
    display(l);
    
    l.remove(6);
    display(l);
    
    
    l.reverse();
    display(l);
    
    
    l.sort();
    display(l);
    
    
}