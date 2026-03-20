#include<iostream>
using namespace std;

//reverse by reverse loop
void reverse(int a[],int n){

    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    
}

//reverse by swaping
void swap(int a[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(a[st],a[end]);
        st++;
        end--;
    }
     // print after swapping
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,n);// Reverse loop → only prints in reverse, doesn’t change the array.
    swap(a,n);   //  Swap method → actually reverses the array in memory.

  
}