/*
Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3

 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int target;
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
               
                swap(a[j],a[j+1]);


            }
        }
    }
    for(int i=0;i<n;i++){
         for(int j=1;j<n;j++){
            if((a[i]+a[j]==target)and(a[i]<a[j])){
                cout<<a[i]<<" and "<<a[j];
            }
        }
        
    }
    cout<<endl;
    return 0;
}







  
   

