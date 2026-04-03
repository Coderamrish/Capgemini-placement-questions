/*
Merge Two Sorted Arrays
Problem: Merge two sorted arrays into one sorted array.

Input:

Array 1: [1, 3, 5]
Array 2: [2, 4, 6]
Output: [1, 2, 3, 4, 5, 6]
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> res;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            res.push_back(a[i]);
            i++;
        } else {
            res.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) {
        res.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        res.push_back(b[j]);
        j++;
    }
    return res;
}
int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    vector<int> res = mergeArrays(a, b);
    for (int x : res) cout << x << " ";
}
/*
TC : O(n + m)
SC: O(n + m)

2nd method using in-place merge
TC:O(N + M) log(N + M
SC:O(1)

*/

#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size();
    int gap = (n + m + 1) / 2;
    while (gap > 0) {
        int i = 0;
        int j = gap;
        while (j < n + m) {
            if (j < n && a[i] > a[j])
                swap(a[i], a[j]);
            else if (i < n && j >= n && a[i] > b[j - n])
                swap(a[i], b[j - n]);
            else if (i >= n && b[i - n] > b[j - n])
                swap(b[i - n], b[j - n]);
            i++, j++;
        }
        if (gap == 1) break;
        gap = (gap + 1) / 2;
    }
}
int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    merge(a, b);
    for (int x : a) cout << x << " ";
    for (int x : b) cout << x << " ";
}