// https://leetcode.com/problems/running-sum-of-1d-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> runningSum(vector<int>& nums) {
    int len = nums.size();
    vector<int> v(len);
    int sum = 0;
    for (int i = 0; i < len; ++i) {
      sum += nums[i];
      v[i] = sum;
    }

    return v;
  }
};
