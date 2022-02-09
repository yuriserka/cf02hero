// https://leetcode.com/problems/valid-anagram/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, int> ms, mt;

    for (const auto c : s) ++ms[c];

    for (const auto c : t) ++mt[c];

    for (const auto [k, v] : mt) {
      if (ms[k] != v) return false;
    }

    return true;
  }
};