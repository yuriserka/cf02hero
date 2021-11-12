// https://leetcode.com/problems/search-insert-position/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l = 0, r = nums.size() - 1;
    int ans = 0;
    while (l <= r) {
      int m = (l + r) / 2;
      if (nums[m] > target) {
        r = m - 1;
        ans = m;
      } else if (nums[m] < target) {
        l = m + 1;
        ans = l;
      } else {
        return m;
      }
    }
    return ans;
  }
};
