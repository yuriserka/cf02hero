// https://leetcode.com/problems/count-hills-and-valleys-in-an-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int countHillValley(vector<int>& nums) {
    const int len = nums.size();
    int hills = 0, valleys = 0, last_l = -1;

    for (int i = 1; i < len - 1; ++i) {
      if (nums[i] == nums[i + 1]) {
        if (last_l == -1) {
          last_l = nums[i - 1];
        }
      } else {
        last_l = -1;
      }

      while ((i < len - 1) && nums[i] == nums[i + 1]) ++i;
      if (i >= len - 1) break;

      int l = last_l == -1 ? nums[i - 1] : last_l;
      if (nums[i] > l && nums[i] > nums[i + 1]) ++hills;
      if (nums[i] < l && nums[i] < nums[i + 1]) ++valleys;
      last_l = -1;
    }

    return hills + valleys;
  }
};