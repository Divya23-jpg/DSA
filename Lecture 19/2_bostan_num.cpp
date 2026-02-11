/*
sum of digit= factors{only prime} of digits to add that factor 
378 = 3+7+8=18
2*3*3*3*7 = 18

*/


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
    // cout<<sum;
    //calculate only prime factor
    for(int i=2;i<=n;i++){
        while(n%i==0){
            if(prime(i)){
                factor+=sumDigit(i);
            }
            n=n/i;
        }
    }
    // cout<<sum<<endl;
    // cout<<factor<<endl;
    if(sum==factor){
        cout<<"Bonstan";
    }
    else{
        cout<<"Not Bonstan";
    
    }
    return 0;


}