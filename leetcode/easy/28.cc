// https://leetcode.com/problems/implement-strstr/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int strStr(string haystack, string needle) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return haystack.find(needle);
  }
};