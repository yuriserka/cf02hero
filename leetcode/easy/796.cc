// https://leetcode.com/problems/rotate-string/

#include <bits/stdc++.h>

using namespace std;

class NaiveSolution {
 public:
  bool rotateString(string s, string goal) {
    int len = s.size();
    for (int i = 0, j = len; i < len; ++i, --j) {
      const string news = s.substr(j) + s.substr(0, j);
      if (news == goal) return true;
    }
    return false;
  }
};

class Solution {
 public:
  bool rotateString(string s, string goal) {
    if (s.size() != goal.size()) return false;
    s += s;
    return s.find(goal) != string::npos;
  }
};
