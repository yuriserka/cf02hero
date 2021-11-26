// https://leetcode.com/problems/length-of-last-word/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int lengthOfLastWord(string s) {
    int l = s.size() - 1;
    while (s[l] == ' ') --l;
    int r = l;
    while (l < s.size() && isalpha(s[l])) {
      --l;
    }
    return r - l;
  }
};