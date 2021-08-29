#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>m;
    m[1]="abc";
    m[3]="cdc";
    m[5]="bbx";

    m[3]="AAbb";

    map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;

    }
}