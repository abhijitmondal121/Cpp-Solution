#include<iostream>
#include<fstream>
using namespace std;
int main(){

   
// for writing in a file
    // ofstream out("test.txt");
    // string s="this is comming from program";
    // out<<s;


// for reading a file
string st1;
    ifstream in("test1.txt");
    getline(in,st1);
    cout<<st1;


    return 0;
}