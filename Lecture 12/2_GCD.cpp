/*
//brute force

#include<iostream>
using namespace std;
int main(){
    int a ,b,ans=1;
    cout<<"Enter 1st number::";
    cin>>a;
    cout<<"Enter 2nd number::";
    cin>>b;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    cout<<ans;
}
*/

//reverse brute force
// #include<iostream>
// using namespace std;
// int main(){
//     int a ,b,ans=1;
//     cout<<"Enter 1st number::";
//     cin>>a;
//     cout<<"Enter 2nd number::";
//     cin>>b;
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0 && b%i==0){
//             cout<<i;
//             break;
//         }
//     }
   
// } 
//Euclidean algorithm

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     while(b!=0){
//         int t=a%b;
//         a=b;
//         b=t;
//     }
//     cout<< a;

// }
// int main(){
//    int a,b;
//    cout<<"Enter 1st number::";

//    cin>>a>>b;
//     gcd(a,b);
//     return 0;
// }

//
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int a,b;
   cout<<"Enter 1st number::";
   cin>>a;
   cout<<"Enter 1st number::";
   cin>>b;
   cout<<__gcd(a,b);
   
    return 0;
}

