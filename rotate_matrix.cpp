/*
Rotate Matrix 90 Degrees
Problem: Rotate a 2D matrix clockwise by 90 degrees.

Input:

[[1, 2, 3],
 [4, 5, 6],
 [7, 8, 9]]
Output:

[[7, 4, 1],
 [8, 5, 2],
 [9, 6, 3]]
*/
#include <iostream>
using namespace std;
#define N 3
void rotateMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        int left = 0, right = N - 1;
        while (left < right) {
            int temp = mat[i][left];
            mat[i][left] = mat[i][right];
            mat[i][right] = temp;
            left++;
            right--;
        }
    }
}
void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int mat[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotateMatrix(mat);
    cout << "Rotated Matrix:\n";
    printMatrix(mat);
    return 0;
}

/*
TC:O(N^2)
SC:O(1)
*/