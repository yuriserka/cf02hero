// https://leetcode.com/problems/capitalize-the-title/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  string capitalizeTitle(string title) {
    stringstream ss(title);
    string word;
    string ans;
    while (ss >> word) {
      transform(begin(word), end(word), begin(word), ::tolower);
      if (word.size() > 2) word[0] = toupper(word[0]);
      ans += word + ' ';
    }

    ans.pop_back();

    return ans;
  }
};