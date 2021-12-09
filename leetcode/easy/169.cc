// https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int major = -1;
    int count = 0;
    for (const int i : nums) {
      if (!count) {
        ++count;
        major = i;
      } else {
        major == i ? ++count : --count;
      }
    }
    return major;
  }
};