#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";+
    }
    cout<<endl;
}


int main(){
    vector<int> vec1;
    int size,element;
    cout<<"enter the size :"<<endl;
    cin>>size;
    cout<<"enter the number : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        //1: to push a element use pushback
        vec1.push_back(element);
        
    }
    //2: to pop a element use popback
    // vec1.pop_back();

    display(vec1);

    //3: if we want to insert a element in 1st of the vector
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter,566);
    //  display(vec1);

    //4: if we want to insert a element in 2nd of the vector
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter+1,566);
    //  display(vec1);

    //5: if we want to insert a element in 2nd and print 5copy  of the vector
    // vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter+1,5,566);
    //  display(vec1);

    // if we want to insert a element in 1st of the vector
    vector<int>::iterator iter=vec1.begin();
    // vec1.insert(iter,566);

     display(vec1);




    return 0;
}