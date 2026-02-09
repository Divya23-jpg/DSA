#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //befor
    for(int i=0;i<n;i++){
        cout<<"Array before updation::"<< arr[i]<<" ";
       
    }
    //after
    for(int i=0;i<n;i++){
        cout<<"Array after updation::"<< arr[i]+1<<" ";
       
    }
    return 0;

}