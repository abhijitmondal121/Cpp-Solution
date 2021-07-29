#include<iostream>
using namespace std;

// class myclass{
//     public:
//     int data1;
//     int data2;
//     myclass(int a,int b){
//         data1=a;
//         data2=b;
//     }
//     void display(){
//         cout<<this->data1<<endl<<this->data2<<endl;
//     }
// };

template<class t1=int,class t2=float>
class myclass{
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a,t2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};



int main(){

    // myclass obj(10,50);
    // obj.display();

    myclass<>ob(50,2.3);
    ob.display();
    cout<<endl;
    myclass<char,int>ob1('a',20);
    ob1.display();


    return 0;
}