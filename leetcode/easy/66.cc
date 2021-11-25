// https://leetcode.com/problems/plus-one/

#include <bits/stdc++.h>

using namespace std;

class OptimalSolution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; --i) {
      if (digits[i] == 9) {
        digits[i] = 0;
      } else {
        ++digits[i];
        return digits;
      }
    }
    digits.insert(begin(digits), 1);
    return digits;
  }
};

class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    vector<int> ans;
    bool carry_out = true;
    int k = digits.size();
    for (auto it = rbegin(digits); carry_out && it != rend(digits); ++it, --k) {
      int sum = *it + carry_out;
      carry_out = sum >= 10;
      ans.insert(begin(ans), carry_out ? sum % 10 : sum);
    }
    for (int i = k - 1; i >= 0; --i) {
      ans.insert(begin(ans), digits[i]);
    }
    if (carry_out) {
      ans.insert(begin(ans), carry_out);
    }
    return ans;
  }
};