// https://leetcode.com/problems/excel-sheet-column-title/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string convertToTitle(int columnNumber) {
    string ans = "";
    for (; columnNumber > 0; columnNumber /= 26) {
      char c = (--columnNumber % 26) + 'A';
      ans = c + ans;
    }
    return ans;
  }
};