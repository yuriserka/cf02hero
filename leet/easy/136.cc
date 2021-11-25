// https://leetcode.com/problems/single-number/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    return accumulate(begin(nums), end(nums), 0,
                      [](int acc, const int n) { return acc ^ n; });
  }
};

class NaiveSolution {
 public:
  int singleNumber(vector<int>& nums) {
    sort(begin(nums), end(nums));
    int last_saw_occ = 1;
    int i = 1;
    for (; i < nums.size(); ++i) {
      if (nums[i] == nums[i - 1])
        ++last_saw_occ;
      else if (last_saw_occ != 2)
        return nums[i - 1];
      else
        last_saw_occ = 1;
    }
    return nums[i - 1];
  }
};