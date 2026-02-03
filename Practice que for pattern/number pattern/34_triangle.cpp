/*

  1 0 1 0 1 
    1 0 1
      1
    1 0 1
  1 0 1 0 1

*/



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number::";
    cin>>n;
  for(int i=1;i<=n/2+1;i++){
        for(int j=i;j>=1;j--){
            cout<<"  ";
        }
        for(int j=n;j>=i*2-1;j--){
            if(j%2==0){
                cout<<0<<" ";}
            else
            {   cout<<1<<" ";}
        }  
        cout<<endl;
    }
  for(int i=n/2;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"  ";
        }
        for(int j=n;j>=i*2-1;j--){
            if(j%2==0){
                cout<<0<<" ";}
            else
            {   cout<<1<<" ";}
        }  
        cout<<endl;
    }
}