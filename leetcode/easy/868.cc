// https://leetcode.com/problems/delete-node-in-a-linked-list/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int binaryGap(int n) {
    bitset<64> bs(n);
    auto s = bs.to_string();
    s = s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));

    bool should_count = false;
    int gap = 0;
    for (auto i = 0; i < s.size(); ++i) {
      if (s[i] == '1') {
        auto dist = s.find('1', i + 1) - i;
        gap = max(gap, dist);
      }
    }

    return gap;
  }

  long long max(long long a, long long b) { return a > b ? a : b; }
};