#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n ,g=0,sum=0;
    cout<<"Enter a number::";
    cin>>n;
    while(n>0){
        int k=n%10;
        sum+=k*pow(2,g);
        g++;
        n=n/10;
        

    }
    cout<<"Decimal To Binary is ::"<< sum <<endl;
    return 0;

    
}