/*
Pythagorean Triplets
Problem: Generate all Pythagorean triplets (a² + b² = c²) where a, b, c are integers smaller than a given limit.

Input: limit = 20

Output:

3 4 5
8 6 10
5 12 13
15 8 17
*/
#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int limit = 20;
    for (int a = 1; a < limit; a++) {
        for (int b = a; b < limit; b++) {
            int c_sq = a*a + b*b;
            int c = sqrt(c_sq);
            if (c*c == c_sq && c < limit) {
                cout << a << " " << b << " " << c << endl;
            }
        }
    }
    return 0;
}

/*
TC:O(N^2)
SC:O(1)
*/