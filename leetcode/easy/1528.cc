// https://leetcode.com/problems/shuffle-string/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string restoreString(string s, vector<int>& indices) {
    const int len = s.size();
    string ans;
    ans.resize(len);
    for (int i = 0; i < len; ++i) {
      const int dest = indices[i];
      ans[dest] = s[i];
    }
    return ans;
  }
};