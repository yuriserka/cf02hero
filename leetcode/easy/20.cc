// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> st;
    for (const auto &ch : s) {
      if (ch == '[' || ch == '{' || ch == '(') {
        st.push(ch);
      } else {
        if (st.empty()) return false;
        char top = st.top();
        st.pop();
        char ch2 = ch - (ch == ')' ? 1 : 2);
        if (top != ch2) return false;
      }
    }
    return st.empty();
  }
};
