#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int even=0,odd=0,poss=0;
    if(n<0 || n>=1000000000){
        return 0;
    }
    else{
        int pos=1;
        while(n>0){
            int m=n%10;
            if(pos%2==0){
                even+=m;
            }
            else{
                odd+=m;
            }
            pos++;
            n=n/10;


        }
        
    cout<<odd<<endl;
    cout<<even<<endl;
    }
    return 0;
}