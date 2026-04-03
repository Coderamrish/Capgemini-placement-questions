/*
Matrix Identity Check
Problem: Check if two given matrices are identical.

Input:

Matrix A: [[1,1,1,1], [2,2,2,2], [3,3,3,3], [4,4,4,4]]
Matrix B: [[1,1,1,1], [2,2,2,2], [3,3,3,3], [4,4,4,4]]

Output: Matrices are identical
*/
#include <iostream>
using namespace std;

bool areIdentical(int A[][4], int B[][4], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int A[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    int B[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    if (areIdentical(A, B, 4, 4))
        cout << "Matrices are identical";
    else
        cout << "Matrices are not identical";
}
/*
TC:O(n*m)
SC:O(1)
*/