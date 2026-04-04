/*
Merge Intervals
Problem: Merge overlapping intervals.

Input: [[1,3],[2,6],[8,10],[15,18]]

Output: [[1,6],[8,10],[15,18]]
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(vector<int> &a, vector<int> &b) {
    return a[0] < b[0];
}
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
    vector<vector<int>> result;
    sort(intervals.begin(), intervals.end(), compare);
    result.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        vector<int> &last = result.back();
        if (intervals[i][0] <= last[1]) {
            last[1] = max(last[1], intervals[i][1]);
        } else {
            result.push_back(intervals[i]);
        }
    }
    return result;
}
int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = mergeIntervals(intervals);
    cout << "Merged Intervals:\n";
    for (auto &v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    return 0;
}

/*
TC :O(n log n)
SC:O(n)
*/