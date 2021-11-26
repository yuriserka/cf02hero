// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    const auto l = nums.size();
    unordered_map<int, int> m;
    for (auto i = 0; i < l; ++i) {
      const auto c = target - nums[i];
      if (const auto it = m.find(c); it != end(m)) {
        return {it->second, i};
      }
      m[nums[i]] = i;
    }
    return {};
  }
};
