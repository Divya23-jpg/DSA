#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5};  // sequence with missing number
    int n = sizeof(arr) / sizeof(arr[0]);

    // Formula: sum of first n natural numbers
    int total = (arr[n-1] * (arr[n-1] + 1)) / 2;

    // Sum of given array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Missing number is: " << total - sum << endl;

    return 0;
}



    

