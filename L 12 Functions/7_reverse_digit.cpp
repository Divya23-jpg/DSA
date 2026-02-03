#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"Enter a number::";
    cin>>n;
    //while loop
    while(n!=0){
        int sum=n%10;
        rev=rev*10+sum;
        n=n/10;
    }
    cout<<rev<<endl;

    //for loop
    // for(int i=n;i!=0;i=i/10){
    //     int sum=i%10;
    //     rev=rev*10+sum;
    //     // n=n/10;

    //     }
    //     cout<<rev<<endl;
        return 0;
    
    
    
    
}

    


