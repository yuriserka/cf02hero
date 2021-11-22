// https://leetcode.com/problems/climbing-stairs/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int tb[46] = {0};

  int climbStairs(int n) {
    if (n < 3) tb[n] = n;
    if (tb[n]) return tb[n];
    tb[n] = climbStairs(n - 1) + climbStairs(n - 2);
    return tb[n];
  }
};