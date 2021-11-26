// https://leetcode.com/problems/maximal-square/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int maximalSquare(vector<vector<char>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();
    vector<vector<int>> tb(r + 1, vector<int>(c + 1, 0));
    int ans = 0;
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        if (matrix[i][j] == '1') {
          tb[i + 1][j + 1] = 1 + min({tb[i + 1][j], tb[i][j + 1], tb[i][j]});
          ans = max(ans, tb[i + 1][j + 1]);
        }
      }
    }
    return ans * ans;
  }
};