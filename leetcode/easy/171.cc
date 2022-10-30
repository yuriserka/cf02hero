// https://leetcode.com/problems/excel-sheet-column-number/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  const int OFFSET = 64;

 public:
  int titleToNumber(string columnTitle) {
    int ans = 0;
    int len = columnTitle.size();

    for (int i = len - 1, j = 0; i >= 0; --i, ++j) {
      ans += pow(26, i) * (columnTitle[j] - OFFSET);
    }

    return ans;
  }
};