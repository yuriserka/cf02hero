// https://leetcode.com/problems/contains-duplicate/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> m;
    for (const int n : nums) {
      if (++m[n] > 1) {
        return true;
      }
    }
    return false;
  }
};