// https://leetcode.com/problems/concatenation-of-array/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> getConcatenation(vector<int>& nums) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> ans;
    copy(begin(nums), end(nums), back_inserter(ans));
    copy(begin(nums), end(nums), back_inserter(ans));
    return ans;
  }
};