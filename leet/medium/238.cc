// https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = nums.size();
    vector<int> ans(n);

    const auto r_m = [&nums](const int offset) {
      return accumulate(begin(nums) + offset, end(nums), 1, multiplies());
    };

    auto l = 1, r = r_m(1);
    for (int i = 0; i < n; ++i) {
      ans[i] = l * r;
      l *= nums[i];
      if (i < n - 1) {
        if (nums[i + 1])
          r /= nums[i + 1];
        else
          r = r_m(i + 2);
      }
    }

    return ans;
  }
};