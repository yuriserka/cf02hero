// https://leetcode.com/problems/integer-to-roman/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string intToRoman(int num) {
    vector<pair<int, string>> m = {{1000, "M"}, {500, "D"}, {100, "C"},
                                   {50, "L"},   {10, "X"},  {5, "V"},
                                   {1, "I"}};
    string s = "";
    div_t d;
    for (const auto [value, sym] : m) {
      do {
        d = div(num, value);
        num = d.rem;

        s += repeat_n(sym, d.quot);

        if ((num >= 4 && num < 5) || (num >= 9 && num < 10)) {
          s += "I";
          s += ((num >= 4 && num < 5) ? "V" : "X");
          num = num % ((num >= 4 && num < 5) ? 4 : 9);
        } else if ((num >= 40 && num < 50) || (num >= 90 && num < 100)) {
          s += "X";
          s += ((num >= 40 && num < 50) ? "L" : "C");
          num = num % ((num >= 40 && num < 50) ? 40 : 90);
        } else if ((num >= 400 && num < 500) || (num >= 900 && num < 1000)) {
          s += "C";
          s += ((num >= 400 && num < 500) ? "D" : "M");
          num = num % ((num >= 400 && num < 500) ? 400 : 900);
        }
      } while (d.quot);
    }
    return s;
  }

  string repeat_n(string s, int n) {
    ostringstream repeated;
    fill_n(ostream_iterator<string>(repeated), n, s);
    return repeated.str();
  }
};