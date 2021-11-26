// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int ans = 0;
    int min_val = INT_MAX;
    for (const int p : prices) {
      min_val = min(min_val, p);
      ans = max(p - min_val, ans);
    }
    return ans;
  }
};