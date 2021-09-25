#include<iostream>
using namespace std;
 int main(){

     string str="My name is Abhijit Mondal";
     string temp;
     for(int i=str.length()-1;i>=0;i--){
        temp += str[i];
        // cout<<str[i];
     }
     cout<<temp;


 }

 

