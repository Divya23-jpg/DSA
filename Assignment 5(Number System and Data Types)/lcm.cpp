/*

Output Format

Sample Input
4 
6
Sample Output
12
The smallest number that is divisible by both 
N1 and N2 is called the LCM of N1 and N2.
*/

#include<iostream>
using namespace std;
int main(){
    int n,m,j;
    cin>>n>>m;
    for(int i=1;i<n*m;i++){
        if(i%n==0 && i%m==0) {
            j=i;
            
            break;
        }

    }
    cout<<j;
    return 0;
}