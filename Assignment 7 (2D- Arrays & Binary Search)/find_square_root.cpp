/*Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))*/

#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
    int ans;
    if(A<0){
        return floor(sqrt(A));
    }
    else{
        for(int i=2;i<A-1;i++){
            ans=A/i;
        }
    }
    return ans;
    
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
	return 0;
}