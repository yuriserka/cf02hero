// https://leetcode.com/problems/defanging-an-ip-address/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string defangIPaddr(string address) {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;

    for (const auto c : address) {
      if (c == '.')
        s += "[.]";
      else
        s += c;
    }

    return s;
  }
};