#include<iostream>
#include<fstream>
using namespace std;
int main(){

   
// for writing in a file
    // string s;
    // ofstream out;
    // out.open("test.txt");
    // cout<<"enter the string "<<endl;
    // cin>>s;
    
    // out<<"My name is "+s;
    // out.close();


// for reading a file
string st1;
    ifstream in;
    in.open("test1.txt");
//     getline(in,st1);
    while(in.eof()==0){

        getline(in,st1);
        cout<<st1<<endl;

    }
   
    in.close();

    return 0;
}