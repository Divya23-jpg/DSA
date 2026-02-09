#include<iostream>
using namespace std;
int main(){
    //1st way
    int num[5]={1};
    // num[0]=1;
    // num[1]=2;
    // num[2]=3;
    // cout<<num[0];
    

    //2nd way
    int num_2[]={1,2,3,4,5};
    cout<<sizeof(num_2)/sizeof(int);
    cout<<num_2[0];
    
    //3rd way
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    return 0;
}