/*
Sample Input
123456789

Sample Output
987654321

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev=0;
    while(n!=0){
        int m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    cout<<rev;
   
    
}

