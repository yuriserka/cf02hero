// https://leetcode.com/problems/roman-to-integer/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int romanToInt(string s) {
    int r = 0;
    for (int i = 0, l = s.size(); i < l; ++i) {
      char c = s[i];
      switch (c) {
        case 'I':
          r += getvalpeek(s, i + 1 < l, c, 'V', 'X', &i);
          break;
        case 'X':
          r += getvalpeek(s, i + 1 < l, c, 'L', 'C', &i);
          break;
        case 'C':
          r += getvalpeek(s, i + 1 < l, c, 'D', 'M', &i);
          break;
        default:
          r += getvalpeek(s, false, c, '\0', '\0', &i);
          break;
      }
    }
    return r;
  }

  int getvalpeek(const string &s, bool canpeek, char curr, char b41, char b42,
                 int *i) {
    if (!canpeek) return tb[curr];
    char peek = s[*i + 1];
    return peek == b41 || peek == b42 ? (++*i, tb[peek] - tb[curr]) : tb[curr];
  }

  map<char, int> tb = {
      {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
      {'C', 100}, {'D', 500}, {'M', 1000},
  };
};
