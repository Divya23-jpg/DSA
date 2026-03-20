#include<iostream>
using namespace std;

void MinMax(int a[],int n){
    int mn=a[0];
    int mx=a[0];
    for(int i=0;i<n;i++){
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    cout<<"Minumum:"<<mn<<endl;
    cout<<"Maximum:"<<mx;

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    MinMax(a,n);
}