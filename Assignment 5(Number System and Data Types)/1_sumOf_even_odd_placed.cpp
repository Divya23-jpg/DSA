#include<iostream>
// #include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int even=0,odd=0,poss=0;
    if(n<0 || n>=1000000000){
        return 0;
    }
    else{
    for( n>0;n!=10;poss++){
         n=n/10;
       
        m=n%10;
        if(poss%2==0){
            even+=m;
        }
        else{
            odd+=m;
        }
        poss++;
    }
    cout<<even<<endl;
    cout<<odd;
    }
    return 0;
}