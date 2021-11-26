// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
    for (const auto& op : operations) (op[1] == '+') ? ++x : --x;
    return x;
  }
};