// https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
      const int m = (l + r) >> 1;
      int val = nums[m];
      if (val == target)
        return m;
      else if (val > target)
        r = m - 1;
      else
        l = m + 1;
    }
    return -1;
  }
};