// https://leetcode.com/problems/valid-sudoku/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isValidSudoku(vector<vector<char>>& board) {
    for (int i = 0; i < 9; ++i) {
      unordered_map<char, int> m;
      for (int j = 0; j < 9; ++j) {
        const char c = board[i][j];
        if (c == '.') continue;
        if (++m[c] >= 2) return false;
      }
    }

    for (int i = 0; i < 9; ++i) {
      unordered_map<char, int> m;
      for (int j = 0; j < 9; ++j) {
        const char c = board[j][i];
        if (c == '.') continue;
        if (++m[c] >= 2) return false;
      }
    }

    int curr_j = 0;
    for (int box = 0; box < 9; ++box) {
      unordered_map<char, int> m;
      int curr_i = (3 * box) % 9;
      for (int i = curr_i; i < (curr_i + 3); ++i) {
        for (int j = curr_j; j < (curr_j + 3); ++j) {
          const char c = board[i][j];
          if (c == '.') continue;
          if (++m[c] >= 2) return false;
        }
      }
      if (box && !((box + 1) % 3)) {
        curr_j += 3;
      }
    }

    return true;
  }
};