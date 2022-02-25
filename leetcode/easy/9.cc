// https://leetcode.com/problems/palindrome-number/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;
    if (!x) return true;
    if (!(x % 10)) return false;

    long long sum = 0;
    while (x > sum) {
      sum = (sum * 10) + (x % 10);
      x /= 10;
    }

    return (x == sum || x == sum / 10);
  }
};

class TrickySolution {
 public:
  bool isPalindrome(int x) {
    if (x < 0) return false;

    auto s = to_string(x);

    for (int i = 0, len = s.size(); i < len; ++i) {
      if (s[i] != s[len - 1 - i]) return false;
    }

    return true;
  }
};