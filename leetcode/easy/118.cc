// https://leetcode.com/problems/pascals-triangle/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    ans.push_back({1});
    for (int i = 1; i < numRows; ++i) {
      vector<int> row;
      row.push_back(1);
      for (int j = 2, l = 0, r = 1; j < i + 1; ++j) {
        row.push_back(ans[i - 1][l++] + ans[i - 1][r++]);
      }
      row.push_back(1);
      ans.push_back(row);
    }
    return ans;
  }
};