/*
Find Duplicates in Array
Problem: Identify duplicate integers in an array.

Input: [4, 3, 2, 7, 8, 2, 3, 1]

Output: 2, 3
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> findDuplicates(vector<int>&nums) {
    vector<int>ans;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int idx = abs(nums[i]) - 1;
if (nums[idx] < 0) {
    ans.push_back(abs(nums[i]));
} else {
    nums[idx] = -nums[idx];
}
    }
    return ans;
}
int main () {
    vector <int> nums = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = findDuplicates(nums);
    for (int x : duplicates) cout << x << " ";
    return 0;
}
/*
TC:O(n)
SC:O(1)
*/