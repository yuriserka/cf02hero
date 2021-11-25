// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int maxProduct(vector<int>& nums) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long n = nums.size();
    int ans = nums[0];
    int curr_min = 1, curr_max = 1;

    for (int i = 0; i < n; ++i) {
      auto tmp = nums[i] * curr_max;
      curr_max = max({nums[i], tmp, nums[i] * curr_min});
      curr_min = min({nums[i], tmp, nums[i] * curr_min});
      ans = max(ans, curr_max);
    }
    return ans;
  }
};