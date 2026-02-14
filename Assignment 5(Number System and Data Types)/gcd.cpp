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
    for(int i=2;i<=min(n,m);i++){
        if(n%i==0 && m%i==0){
            j=i;
        }
        
    }
    cout<<j;

    return 0;

}



