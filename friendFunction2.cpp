#include<iostream>
using namespace std;
class complex;

class calculator{
    public:
    int add(int a,int b){
        return(a+b);
    }
    int sumRealComplex(complex,complex);
    int sumimgComplex(complex,complex);
};

class complex{
    int a,b;
    
    
    // individualy declear a function as friend


    friend int calculator :: sumRealComplex(complex,complex);
    friend int calculator :: sumimgComplex(complex,complex);
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;

    }
};
int calculator:: sumRealComplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator:: sumimgComplex(complex o1,complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(6,8);
    calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resc=calc.sumimgComplex(o1,o2);
    cout<<"The sum of img part of o1 and o2 is "<<resc<<endl;
    return 0;
}