#include<iostream>
using namespace std;
int main(){
     
    int p,r,t;
    cout<<"Enter Princple amount::";
    cin>>p;
    cout<<"Enter rate of interest::";
    cin>>r;
    cout<<"Enter time in years::";
    cin>>t;
    int si = p*r*t/100; 
    cout<<"The SI caclutaion is:: "<< si<<endl;
   

    return 0;
}