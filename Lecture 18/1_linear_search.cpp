#include<iostream>
using namespace std;
int main(){
    int n,t,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number:";
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
           cout<<i+1;
          
        }
        else{
            flag++;
        }
    }
    if(flag==n){
        cout<<"Not found";
    }
    
    return 0;

}