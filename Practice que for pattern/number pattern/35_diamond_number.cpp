/*

      1  
    1   1
  2       2
3           3
  2       2
    1   1
      1


*/



#include<iostream>
using namespace std;
int main() {
    int i, j, n = 7,m=n/2;
    for(i=0;i<=m;i++){
        for(j=m-i;j>=1;j--){
            cout<<"  ";
        }
        if(i==0){
            cout<<1<<" ";
        }
        else{
            cout<<i<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        if(i==0){
         cout<<" ";
        }
        else{
            cout<<i<<" ";
        }
         cout<<endl;
    }
    for(i=m-1;i>=0;i--){
        for(j=m-i;j>=1;j--){
            cout<<"  ";
        }
        if(i==0){
            cout<<1<<" ";
        }
        else{
            cout<<i<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        if(i==0){
         cout<<" ";
        }
        else{
            cout<<i<<" ";
        }
         cout<<endl;
    }
    return 0;
}