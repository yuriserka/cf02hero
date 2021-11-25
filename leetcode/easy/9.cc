// https://leetcode.com/problems/palindrome-number/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isPalindrome(int x) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (x < 0) return false;

    auto s = to_string(x);

    for (int i = 0, len = s.size(); i < len; ++i) {
      if (s[i] != s[len - 1 - i]) return false;
    }

    return true;
  }
};