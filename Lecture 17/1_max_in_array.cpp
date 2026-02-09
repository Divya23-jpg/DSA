#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//2,45,67,1
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];


        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum:"<< max<<endl;
    cout<<"Minimum:"<< min<<endl;
   
    return 0;
}
