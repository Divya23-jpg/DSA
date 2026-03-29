#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int>& v, int start, int end) {
    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}



int main() {
    int p;
    cin >> p;
    vector<int> v(p);

    for (int i = 0; i < p; i++) {
        cin >> v[i];
    }

    int k;
    cin >> k;

    // rotate(v, k);

    for (int i = 0; i < p; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    int n = v.size();
    k = k % n; // handle cases where k > n

    // Step 1: Reverse the whole array
    
    // Step 2: Reverse first k elements
    reverseArray(v, 0, k - 1);
    
    // Step 3: Reverse remaining n-k elements
    reverseArray(v, k, n - 1);
    reverseArray(v, 0, n - 1);
    return 0;
}
