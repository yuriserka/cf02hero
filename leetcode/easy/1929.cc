// https://leetcode.com/problems/concatenation-of-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;
    copy(begin(nums), end(nums), back_inserter(ans));
    copy(begin(nums), end(nums), back_inserter(ans));
    return ans;
  }
};