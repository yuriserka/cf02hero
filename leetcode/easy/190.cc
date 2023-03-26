// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    bitset<32> bs(n);
    const int len = bs.size();
    for (int i = 0, j = len - 1; i < len / 2; ++i, --j) {
      const bool temp = bs[i];
      bs[i] = bs[j];
      bs[j] = temp;
    }
    return bs.to_ulong();
  }
};