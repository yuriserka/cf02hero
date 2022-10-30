// https://leetcode.com/problems/merge-two-sorted-lists/

#include <bits/stdc++.h>

using namespace std;

class Solution {
  const int OFFSET = 64;

 public:
  int titleToNumber(string columnTitle) {
    int ans = 0;
    int len = columnTitle.size();

    if (len < 2) return columnTitle[0] - OFFSET;

    for (int i = len - 1, j = 0; i >= 0; --i, ++j) {
      ans += pow(26, i) * (columnTitle[j] - OFFSET);
    }

    return ans;
  }
};