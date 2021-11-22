// https://leetcode.com/problems/add-binary/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string addBinary(string a, string b) {
    auto n_zeros = max(a.length(), b.length());
    auto sa = string(n_zeros - min(n_zeros, a.length()), '0') + a;
    auto sb = string(n_zeros - min(n_zeros, b.length()), '0') + b;

    string s = "";
    bool carry_out = false;
    for (int i = n_zeros - 1; i >= 0; --i) {
      int sum = (sa[i] - '0') + (sb[i] - '0') + carry_out;
      carry_out = sum >= 2;
      s.insert(0, 1, (sum % 2) + '0');
    }
    if (carry_out) s.insert(0, 1, '1');
    return s;
  }

  int min(int a, int b) { return a < b ? a : b; }

  int max(int a, int b) { return a > b ? a : b; }
};