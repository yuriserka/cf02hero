// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<int> countPoints(vector<vector<int>>& points,
                          vector<vector<int>>& queries) {
    vector<int> ans;
    for (const auto& q : queries) {
      int sum = 0;
      for (const auto& p : points) {
        const int x_ = p[0] - q[0];
        const int y_ = p[1] - q[1];
        const int r_ = q[2];
        sum += (((x_ * x_) + (y_ * y_)) <= (r_ * r_));
      }
      ans.push_back(sum);
    }
    return ans;
  }
};