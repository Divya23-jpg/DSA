#include<iostream>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }
    int f=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            f++;
        }
          
    }
    
    return (f==2);
}
int main(){
 
    int st,end;
    cin>>st>>end;
    for(int i=st;i<=end;i++){
        if(prime(i)){
            cout<<i<<endl;
        }
    }
   return 0;
    
}