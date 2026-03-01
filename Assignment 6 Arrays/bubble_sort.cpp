/*
4
2
-18
45
30


output
-18
2
30
45
*/


#include<iostream>
using namespace std;
#include<algorithm>
// #include<cmath>
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=1;i<n;i++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                // int temp=arr[i];
                // arr[i]=arr[j];
                // arr[j]=temp;
            }
    
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
          

    }

    return 0;



}