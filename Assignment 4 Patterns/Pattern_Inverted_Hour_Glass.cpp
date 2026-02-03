#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    //numbers
    for(int i =1;i<=n;i++){   

        //numbers
        for(int j=5;j<=i;j++ ){
            cout<<j<<" ";
            
        }
        
        cout<<endl;
       
        
    }
   

    

}


/*
             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 

*/