// https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isPalindrome(string s) {
    for (int l = 0, r = s.size() - 1; l < r; ++l, --r) {
      while (l < r && !isalnum(s[l])) ++l;
      while (l < r && !isalnum(s[r])) --r;
      if (tolower(s[l]) != tolower(s[r])) return false;
    }
    return true;
  }
};

class LibSolution {
 public:
  bool isPalindrome(string s) {
    s.erase(
        remove_if(begin(s), end(s), [](const auto c) { return !isalnum(c); }),
        end(s));

    transform(begin(s), end(s), begin(s), ::tolower);

    for (int l = 0, r = s.size() - 1; l < r; ++l, --r) {
      if (s[l] != s[r]) return false;
    }
    return true;
  }
};