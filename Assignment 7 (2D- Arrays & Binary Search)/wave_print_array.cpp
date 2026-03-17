/*
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

11, 12, 13, 14, 24, 23, 22,
21, 31, 32, 33, 34, 44, 43, 42, 41, END
*/


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
    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {
            // Left to Right
            for (int j = 0; j < N; j++) {
                cout << mat[i][j] << ", ";
            }
        } else {
            // Right to Left
            for (int j = N - 1; j >= 0; j--) {
                cout << mat[i][j] << ", ";
            }
        }
    }
    cout<< "END";

    return 0;
}