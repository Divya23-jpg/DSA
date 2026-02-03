/*
     *  
   * ! *  
  * ! * ! *  
 * ! * ! * ! *  
* ! * ! * ! * ! *  

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value  : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //left
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  "; 
        }
        //stars
        for(int j=1;j<=i;j++){
            if(j%2!=0){
                cout<<"* ";
            }
            else{
                cout<<"! ";
            }

        }
        //Right
        //stars
        for(int j=i;j>1;j--){
             if(j%2!=0){
                cout<<"! ";
            }
            else{
                cout<<"* ";
            }

        }
    cout<<endl;
    }
}