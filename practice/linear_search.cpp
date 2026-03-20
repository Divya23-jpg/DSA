#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;
    int found=-1;
    int i=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found=i;
            break;
        }
   
        
    }
 
    if(found!=-1){
        cout<<"Prsent in position "<<found;
       
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}