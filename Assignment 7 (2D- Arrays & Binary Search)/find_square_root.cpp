/*Compute and return the square root of x.

If x is not a perfect square, return floor(sqrt(x))*/

#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int squareRoot(int A) {
    if (A < 0) return -1; // invalid case

    int low = 0, high = A, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid <= A) {
            ans = mid;      // possible answer
            low = mid + 1;  // try bigger
        } else {
            high = mid - 1; // try smaller
        }
    }
    return ans;
}

int main() {
    int A;
    cin >> A;
    cout << squareRoot(A);
    return 0;
}
