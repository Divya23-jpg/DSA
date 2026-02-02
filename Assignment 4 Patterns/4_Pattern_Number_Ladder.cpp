//Complete...................
#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++){
      
        //left patter
        for(int j=0;j<i;j++){
            cout<<count++<<"  \t";
    
           
        }
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
 
        }
   
       
      cout<<endl;
    }
    
     return 0;

}