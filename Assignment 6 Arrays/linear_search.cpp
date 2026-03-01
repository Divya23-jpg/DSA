#include<iostream>
using namespace std;
int main(){
    int found=0;
    int n;
    cin>>n;
    int arr[n] ;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
            found++;
           
        }
    }
    if(found==0){
        cout<<-1;
    }
    return 0;
}