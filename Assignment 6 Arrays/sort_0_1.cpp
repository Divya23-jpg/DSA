/*
Sample Input
7
1 0 0 1 1 0 1

Sample Output
0 0 0 1 1 1 1

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int count0 = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) count0++;
    }
    // Print all 0s first
    for (int i = 0; i < count0; i++) cout << 0 << " ";
    // Then all 1s
    for (int i = count0; i < n; i++) cout << 1 << " ";
    return 0;
}