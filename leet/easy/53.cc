// https://leetcode.com/problems/maximum-subarray/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = nums.size();

    if (n == 1) return nums[0];

    int ans = nums[0];
    int curr_sum = ans;
    for (int i = 1; i < n; ++i) {
      curr_sum = max(nums[i], curr_sum + nums[i]);
      ans = max(ans, curr_sum);
    }
    return ans;
  }
};
