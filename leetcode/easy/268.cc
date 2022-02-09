// https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    const auto arr_sum = accumulate(begin(nums), end(nums), 0);
    const auto len = nums.size();
    const auto sum = (len * (len + 1)) / 2;
    return sum - arr_sum;
  }
};