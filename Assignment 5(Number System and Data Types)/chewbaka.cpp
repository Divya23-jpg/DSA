/*Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. 
Inverting digit t means replacing it with digit 9 - t.Help Chewbacca to transform the initial number x to the minimum possible 
positive number by inverting some (possibly, zero) digits.
 The decimal representation of the final number shouldn't start with a zero
 
Sample Input
4545

Sample Output
4444
 
 */
#include<iostream>
using namespace std;
int length (int n){
    int ans=0;
    while(n!=0){
        n=n/10;
        ans++;
    }
    return ans;
}

int reverse (int n){
    int rever=0;
    while(n!=0){
        int k=n%10;
        rever=rever*10+k;
        n=n/10;
    }
    return rever;
}
int  main(){

    int n,rev=1;
    int a;
   
    cin>>n;
    int l=length(n);
    
    while(n!=0){
        int k=n%10;
        int inv=9-k;
        if(l==1 && inv==0 ){
            rev=rev*10+k;
           
            l--;
        }
        if(inv>k){
            rev=rev*10+k;
            l--;
           
        }
        else{
            rev=rev*10+inv;
            l--;
        }
        n/=10;

    }
    cout<<reverse(rev)/10<<endl;
    return 0;
   
  
   
}