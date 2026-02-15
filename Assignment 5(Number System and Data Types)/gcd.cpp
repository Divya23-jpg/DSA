/*

Output a single integer which is the GCD of the given integers.


Sample Input
16 
24
Sample Output
8

*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m,j;
    cin>>n>>m;
    for(int i=2;i<n*m;i++){
        // cout<<i<<" ";
        if(i%n==0 && i%m==0){
            j=i;
        }
        
    }
    cout<<j;

    return 0;

}
