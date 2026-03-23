#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int smax=0;
    int mx=a[0];
    for(int i=0;i<n;i++){
  
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=mx){
        smax=max(smax,a[i]);}
    }
    cout<<"Maximum:"<<mx<<endl;
    cout<<"Maximum:"<<smax;

   
}