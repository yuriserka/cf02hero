// https://leetcode.com/problems/add-digits/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int addDigits(int num) {
    int ans;
    int prev = num;
    do {
      ans = 0;
      do {
        ans += prev % 10;
        prev /= 10;
      } while (prev);
      prev = ans;
    } while (prev % 100 >= 10);
    return ans;
  }
};