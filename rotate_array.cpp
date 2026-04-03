/*
Rotate an Array
Problem: Rotate an array right by k steps.

Input:

Array: [1, 2, 3, 4, 5]
k = 2
Output: [4, 5, 1, 2, 3]
*/
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k >= n
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    rotate(nums, k);
    for (int x : nums) cout << x << " ";
}
/*
TC: O(n)
SC: O(1)
*/