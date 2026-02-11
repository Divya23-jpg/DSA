/*
153= 1 cube + 5 cube + 3 cube =  153

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int og=n;
    int temp=n;
    int sum=0,l=0;

    //calculate total digit in n
    while(temp!=0){
        temp=temp/10;
        l++;
    }
    
    //find digit and sum
    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    if(og==sum){
        cout<<"Armstrong number ";
    }
    else{
        cout<<"Not Armstrong number ";
    }
    return 0;

}