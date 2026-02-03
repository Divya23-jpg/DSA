/*

                *  
              * * *  
            * * * * *  
          * * * * * * *  
        *  * * * * * * * * 


*/

#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the value  : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //left stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        
        }
        //right stars
        for(int j=i;j>1;j--){
            cout<<"* ";
        
        }
        cout<<endl;
    }
}