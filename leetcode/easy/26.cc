// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k = 0, len = nums.size();
    for (int i = 0, j = 0; i < len; ++i) {
      if (i == len - 1 || nums[i] != nums[i + 1]) {
        ++k;
        nums[j++] = nums[i];
      }
    }
    return k;
  }
};