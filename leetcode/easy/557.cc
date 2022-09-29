// https://leetcode.com/problems/reverse-words-in-a-string-iii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string reverseWords(string s) {
    stringstream ss(s);
    string word;
    string ans;
    while (ss >> word) {
      reverse(begin(word), end(word));
      ans += word + ' ';
    }
    ans.pop_back();
    return ans;
  }
};