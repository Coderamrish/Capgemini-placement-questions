/*
String Rotation
Problem: Check if one string is a rotation of another.

Input:

String A: "ABCD"
String B: "CDAB"
Output: True
*/
#include <bits/stdc++.h>
using namespace std;
bool isRotation(string A, string B) {
    if (A.length() != B.length()) return false;
    string temp = A + A;
    return temp.find(B) != string::npos;
}
int main () {
    string A= "ABCD";
    string B = "CDAB";
    cout << (isRotation(A, B) ? "True" : "False");
    return 0;
}

/*
TC:O(n)
SC:O(n)
*/