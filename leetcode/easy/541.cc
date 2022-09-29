// https://leetcode.com/problems/reverse-string-ii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string reverseStr(string s, int k) {
    auto splitted = vector<string>();
    const auto slen = s.size();
    for (int i = 0; i <= slen; i += k) splitted.push_back(s.substr(i, k));

    const auto vlen = splitted.size();
    string out = "";
    for (int i = 0; i < vlen; ++i) {
      auto to_rev = splitted[i];
      if (!(i % 2)) reverse(begin(to_rev), end(to_rev));
      out += to_rev;
    }

    return out;
  }
};