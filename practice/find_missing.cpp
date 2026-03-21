#include <iostream>
using namespace std;
//one way
int main() {
    int arr[] = {1, 2, 4, 5}; // Missing 3
    int n = 5; // supposed to be 1..5
    int sum = 0;
    for(int i=0; i<n-1; i++) sum += arr[i];
    int total = n*(n+1)/2;
    cout << "Missing element: " << total - sum;
    return 0;
}


#include <iostream>
using namespace std;

//2nd way
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



    

