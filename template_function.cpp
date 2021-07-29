
#include<iostream>
using namespace std;

// float funavg(int a,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template<class t1,class t2>
float funavg(t1 a,t2 b){
    float avg=(a+b)/2.0;
    return avg;
}


int main(){

    // cout<<"avg : "<<funavg(12,3)<<endl;

    cout<<"avg : "<<funavg(11.5,3.5)<<endl;

    return 0;
}