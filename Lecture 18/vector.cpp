/*
vector is a datatype  in which size can be increased or decreased
size denpends on 2 to the power of size of vector

Inizialization
vector<int>    garbage value
a.push_back(1)  for push numbers

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // Inizialization 
    vector<int> a;
    // 1st way
    // Element Enter in a vector
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);

    //element of a vector
    cout<<"Element of a vector:: ";
   
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    
    }
    cout<<endl;
     //size
    cout<<"Size of vector:";
    cout<<a.size()<<endl;
    //capacity
    cout<<"Capacity of vector:";
    cout<<a.capacity()<<endl;

    a.pop_back();
     //size and element  after pop
    cout<<"Size  element after pop:: ";
    cout<<a.size()<<endl;
     cout<<"element after pop:: ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    //fist element
    cout<<"First element:: ";
    cout<<a.front()<<endl;
    //last element
    cout<<"last element::" ;
    cout<<a.back()<<endl;

    //insert number in starting
    cout<<"Number insert in starting +2 position"<<endl;
    a.insert(a.begin()+2,10);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //reverer
    cout<<"Reverse of avector::";
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    
   
    //sort
    cout<<"sort of avector::";
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;




    
}