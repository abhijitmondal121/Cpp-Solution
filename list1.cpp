#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for (it = lst.begin();it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1;//list of 0 length
    list1.push_back(6);
    list1.push_back(16);
    list1.push_back(7);
    list1.push_back(2);

    list<int>:: iterator iter;

    // iter=list1.begin();
    // cout<<*iter<<endl;
    // iter++;
    //  cout<<*iter<<endl;

    display(list1);

        // list2
       list<int>list2(3);//empty list of size 7
       list<int>::iterator iter1;
       iter1=list2.begin();
       *iter1=45;
       iter1++;
       *iter1=5;
       iter1++;
       *iter1=12;
        iter1++;
        // list2.pop_back();//remove from last
        // list2.pop_front();//remove from 1st
        // list2.remove(5);//remove from specific element
        // list2.sort();//sorting the list
        list2.merge(list1);//marge a list
        
        display(list2);


    return 0;
}