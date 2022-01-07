// https://leetcode.com/problems/construct-k-palindrome-strings/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool canConstruct(string s, int k) {
    if (s.length() == k) return true;
    if (k > s.length()) return false;

    unordered_map<char, int> ch_occ;
    for (const auto ch : s) ch_occ[ch]++;

    int num_of_odd = 0;
    for (const auto [_, occ] : ch_occ) {
      num_of_odd += occ % 2;
    }

    return num_of_odd <= k;
  }
};