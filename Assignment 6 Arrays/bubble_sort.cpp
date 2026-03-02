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
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                // int temp=arr[i];
                // arr[i]=arr[j];
                // arr[j]=temp;
                swap(arr[j],arr[j+1]);


            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\n';
    }
    return 0;

}