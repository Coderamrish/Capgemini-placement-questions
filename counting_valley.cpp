/*
Counting Valleys
Problem: Given a sequence of up (U) and down (D) steps during a hike, determine the number of valleys traversed. A valley is a sequence of consecutive steps below sea level.

Input:

8
UDDDUDUU

Output: 1

Explanation: The hiker enters one valley (the DDD part).
*/
#include <iostream>
using namespace std;
int main () {
    int n = 8;
     string path = "UDDDUDUU";
    int level = 0, valley = 0;
    for (int i = 0; i < n; i++) {
        if(path[i] == 'U') {
            level++;
            if (level == 0) {
                valley++;
            }
        } else {
            level--;
        }
    }
    cout << "NO of valleys: " << valley << endl;
    return 0;
}