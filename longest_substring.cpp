/*
Longest Substring Without Repeating Characters
Problem: Find the length of the longest substring with unique characters.

Input: "abcabcbb"

Output: 3 (substring "abc")
*/
#include <bits/stdc++.h>
using namespace std;
int lengthofLongestSubstring(string s) {
    int n = s.size();
    unordered_map<char, int>mp;
    int left = 0;
    int maxLen = 0;
    for (int right = 0; right < n; right++) {
        if(mp.find(s[right]) != mp.end()) {
            left = max(left, mp[s[right]] + 1);
        }
        mp[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
int main() {
    string s = "abcabcbb";
    cout << lengthofLongestSubstring(s) << endl; // Output: 3
    return 0;
}

/*
TC:O(n)
SC:O(min(m,n)) where m is the size of char map and n is size of string.
*/