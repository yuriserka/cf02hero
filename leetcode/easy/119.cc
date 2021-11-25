// https://leetcode.com/problems/pascals-triangle-ii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    vector<int> ans;
    for (int i = 0; i <= rowIndex; ++i) {
      ans.push_back(combinatory(rowIndex, i));
    }
    return ans;
  }

  unsigned long long combinatory(unsigned long long n, unsigned long long k) {
    if (k > n) return 0;
    unsigned long long r = 1;
    for (unsigned long long d = 1; d <= k; ++d) {
      r *= n--;
      r /= d;
    }
    return r;
  }
};