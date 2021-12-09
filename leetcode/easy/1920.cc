// https://leetcode.com/problems/build-array-from-permutation/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> buildArray(vector<int>& nums) {
       vector<int> v;
    for (const auto e : nums) v.push_back(nums[e]);
    return v;
  }
};