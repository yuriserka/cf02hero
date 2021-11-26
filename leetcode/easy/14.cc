// https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    int maxlen = strs[0].size();
    string p = "";
    for (int i = 0; i < maxlen; ++i) {
      const char last = strs[0][i];
      for (const auto& s : strs) {
        if (s[i] != last) return p;
      }
      p += last;
    }
    return p;
  }
};
