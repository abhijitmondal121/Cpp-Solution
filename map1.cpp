#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){
    map<string,int>marksMap;
    marksMap["Abhijit"]=90;
    marksMap["Suvam"]=50;
    marksMap["Rajib"]=30;

     map<string,int>::iterator itr;
     for (itr = marksMap.begin(); itr !=marksMap.end(); itr++)
     {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
     }
     
    return 0;
}