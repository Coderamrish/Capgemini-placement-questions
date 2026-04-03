/*
First Non-Repeated Character
Problem: Find the first unique character in a string.

Input:

"swiss"

Output: 'w'
*/
#include <iostream>
#include <unordered_map>
using namespace std;
char firstNon(string s) {
    unordered_map<char, int> freq;
    for(char ch : s) {
        freq[ch]++;
    }
    for(char ch : s) {
        if(freq[ch] == 1) return ch;
    }
    return 0;
}
int main() {
    string s = "swiss";
    cout << firstNon(s);
    return 0;
}
/*
TC: O(N)
SC:O(1)
*/