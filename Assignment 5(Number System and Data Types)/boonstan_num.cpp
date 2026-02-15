#include<iostream>

using namespace std;
//function to add digit
int sumDigit(int n){
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum=sum+k;
        n=n/10;
    }
    return sum;
}
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;

        }
    }
    return true;


}
int main(){
    int n;
    cin>>n;
    int sum=0, factor=0;
  
    //sumdigit
    sum=sumDigit(n);
  
    //calculate only prime factor
    for(int i=2;i<=n;i++){
        while(n%i==0){
            if(prime(i)){
                factor+=sumDigit(i);
            }
            n=n/i;
        }
    }
    
    if(sum==factor){
        cout<<1;
    }
    else{
        cout<<0;
        
    }
   
    return 0;


}