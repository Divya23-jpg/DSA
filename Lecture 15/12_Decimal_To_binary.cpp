#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}


int  main(){
    int n,bn=1;
    cout<<"Enter decimal number to convert into binary::";
    cin>>n;
    while(n>0){
        int m=n%2;
        bn=bn*10+m;
        n=n/2;
    
    }
    cout<<"Binary is::"<< reverse(bn)/10 <<endl;
    return 0;


}