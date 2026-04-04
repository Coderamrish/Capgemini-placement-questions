/*
Majority Element
Problem: Find the element appearing more than n/2 times in an array.

Input: [2, 2, 1, 1, 1, 2, 2]

Output: 2
*/
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int cnt = 0, candidate = 0;
    for (int num : nums) {
        if (cnt == 0) {
            candidate = num;
        }
        cnt += (num == candidate) ? 1 : -1;
    }
    return candidate;
}
int main () {
    vector<int>nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums) << endl;
    return 0;
}

/*
TC:O(n)
SC:O(1)
*/