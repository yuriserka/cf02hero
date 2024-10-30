// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    const auto binary_search = [&nums, &target](const bool left_search) {
      int l = 0;
      int r = nums.size() - 1;
      int ans = -1;

      while (r >= l) {
        int m = (r + l) / 2;
        if (nums[m] == target) {
          ans = m;
          if (left_search)
            r = m - 1;
          else
            l = m + 1;
        } else if (nums[m] < target)
          l = m + 1;
        else
          r = m - 1;
      }

      return ans;
    };

    return {binary_search(true), binary_search(false)};
  }
};