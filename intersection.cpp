/*
Intersection of Two Arrays
Problem: Find common elements in two unsorted arrays.

Input:

Array 1: [1, 2, 2, 1]
Array 2: [2, 2]

Output: [2]
*/
#include <iostream>
using namespace std;
int main() {
    int nums1[] = {1, 2, 2, 1};
    int nums2[] = {2, 2};
    int n = 4, m = 2;
    int hash[2001] = {0};  
    for (int i = 0; i < n; i++) {
        hash[nums1[i] + 1000] = 1;
    }
    int result[100]; 
    int k = 0;
    for (int i = 0; i < m; i++) {
        if (hash[nums2[i] + 1000] == 1) {
            result[k++] = nums2[i];
            hash[nums2[i] + 1000] = 0; 
        }
    }
    cout << "Intersection: ";
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
/*
TC:O(n + m)
SC:O(n)
*/