#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,add=0;
    cout<<"Enter a number::";
    cin>>n;
    //while loop
    while(n!=0){
        int sum=n%10;
        add=add+sum;
        n=n/10;
    }
    cout<<add<<endl;
    cout<<abs(add);


    //for loop
    // for(int i=n;i!=0;i=i/10){
    //     int sum=i%10;
    //     add=add+sum;
    //     // n=n/10;

    //     }
    //     cout<<add<<endl;
        return 0;
    
    
    
    
}