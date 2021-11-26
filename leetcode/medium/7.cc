// https://leetcode.com/problems/reverse-integer/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int reverse(int x) {
    auto neg = x < 0;
    stringstream ss;
    ss << abs(x);
    auto s = ss.str();
    std::reverse(begin(s), end(s));
    auto val = std::stoll(s) * (neg ? -1 : 1);
    return val < INT_MIN || val > INT_MAX ? 0 : val;
  }
};