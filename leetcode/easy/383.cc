// https://leetcode.com/problems/ransom-note/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> mm;
    for (const auto &ch : magazine) ++mm[ch];

    unordered_map<char, int> mn;
    for (const auto &ch : ransomNote) ++mn[ch];

    for (const auto &[ch, n] : mn) {
      if (!mm.count(ch) || mm[ch] < n) {
        return false;
      }
    }

    return true;
  }
};