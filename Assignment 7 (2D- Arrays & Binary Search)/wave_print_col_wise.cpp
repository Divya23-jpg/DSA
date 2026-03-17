#include<iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    // Use vector for dynamic 2D array
    vector<vector<int>> mat(M, vector<int>(N));

    // Input
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    // Output: Wave Print Row Wise
    for (int j = 0; j < N; j++) {
        if (j % 2 == 0) {
            // Left to Right
            for (int i = 0; i < M; i++) {
                cout << mat[i][j] << ", ";
            }
        } else {
            // Right to Left
            for (int i = M - 1; i >= 0; i--) {
                cout << mat[i][j] << ", ";
            }
        }
    }
    cout<< "END";

    return 0;
}