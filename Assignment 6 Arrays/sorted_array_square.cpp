/*
Sample Input
5
-4 -1 0 3 10

Sample Output
0 1 9 16 100
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
    int p[n];
    for(int i=0;i<n;i++){
        p[i]=a[i]*a[i];
       
        
    }
    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(p[j]>p[j+1]){
                    swap(p[j],p[j+1]);
                }
            }
          
        }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
   
   
    return 0;
}