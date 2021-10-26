#include<iostream>
using namespace std;




class student{
    protected:
    int roll;
    public:
    void setNumber(int a){
        roll=a;
    }
    void print(){
        cout<<"your roll : "<<roll<<endl;
    }
};
class test:virtual public student{
    protected:
    float maths,physics;
    public:
    void setmMarks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void printMarks(){
        cout<<"your result : "
            <<"maths"<<maths<<endl
            <<"physics"<<physics<<endl;
    }

};
class sports:virtual public student{
    protected:
    float score;
    public:
    void setScore(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"your pt score :"<<score<<endl;
    }
};

class result: public test,public sports{
   float total;
   public:
   void display(){
       total=maths+physics+score;
       print();
       printMarks();
       print_score();
       cout<<"your total score is:"<<total<<endl;
   }
};
int main(){
    result abhijit;
    abhijit.setNumber(80);
    abhijit.setmMarks(90.2,65.5);
    abhijit.setScore(50);
    abhijit.display();
    return 0; 
}