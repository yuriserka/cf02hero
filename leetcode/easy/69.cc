// https://leetcode.com/problems/sqrtx/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int mySqrt(int x) {
    int l = 0, r = x;
    int ans = 0;
    while (l <= r) {
      long long m = (l + r) / 2;
      long long sq = m * m;
      if (sq > x) {
        r = m - 1;
      } else if (sq < x) {
        l = m + 1;
        ans = max(ans, m);
      } else {
        return m;
      }
    }
    return ans;
  }

  long long max(long long a, long long b) { return a > b ? a : b; }
};