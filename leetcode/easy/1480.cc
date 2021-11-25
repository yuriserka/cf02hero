// https://leetcode.com/problems/running-sum-of-1d-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> runningSum(vector<int>& nums) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

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
