// https://leetcode.com/problems/happy-number/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isHappy(int n) {
    int slow = n, fast = next(n);
    while (slow != fast) {
      slow = next(slow);
      fast = next(next(fast));
    }
    return slow == 1;
  }

  int next(int n) {
    int s = 0;
    while (n) {
      const int tmp = n % 10;
      s += tmp * tmp;
      n /= 10;
    }
    return s;
  }
};