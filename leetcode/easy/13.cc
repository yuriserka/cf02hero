// https://leetcode.com/problems/roman-to-integer/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int romanToInt(string s) {
    const int len = s.size();

    if (!len) return 0;

    unordered_map<char, int> m = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                  {'C', 100}, {'D', 500}, {'M', 1000}};

    long long ans = 0;
    for (int i = 0; i < len - 1; ++i) {
      int curr = m[s[i]];
      int nxt = m[s[i + 1]];
      ans += curr < nxt ? -curr : curr;
    }
    ans += m[s.back()];

    return ans;
  }
};
