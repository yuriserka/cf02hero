// https://leetcode.com/problems/number-of-good-pairs/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int numIdenticalPairs(vector<int>& nums) {
    const int len = nums.size();
    int ans = 0;
    for (int i = 0; i < len; ++i) {
      for (int j = i + 1; j < len; ++j) {
        ans += nums[i] == nums[j];
      }
    }
    return ans;
  }
};