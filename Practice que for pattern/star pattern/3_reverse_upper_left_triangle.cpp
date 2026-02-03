/*

Ques 3: 
n = 5  
* * * * *  
* * * *  
* * *  
* *  
* 

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value  : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        
        }
        cout<<endl;
    
    }


}