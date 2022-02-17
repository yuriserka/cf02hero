// https://leetcode.com/problems/container-with-most-water/

#include <bits/stdc++.h>

using namespace std;

class OptimalSolution {
 public:
  int maxArea(vector<int>& height) {
    int ans = INT_MIN;
    const int len = height.size();
    for (int i = 0, j = len - 1; i < j;) {
      const int area = (j - i) * min(height[i], height[j]);
      ans = max(ans, area);
      height[i] < height[j] ? ++i : --j;
    }
    return ans;
  }

  int max(int a, int b) { return a > b ? a : b; }

  int min(int a, int b) { return a < b ? a : b; }
};

class SquaredSolution {
 public:
  int maxArea(vector<int>& height) {
    int maxh = INT_MIN;
    int ans = -1;
    const int len = height.size();
    for (int i = 0; i < len; ++i) {
      if (height[i] > maxh) {
        maxh = height[i];
        for (int j = i + 1; j < len; ++j) {
          const int area = (j - i) * min(height[i], height[j]);
          ans = max(ans, area);
        }
      }
    }

    return ans;
  }

  int max(int a, int b) { return a > b ? a : b; }

  int min(int a, int b) { return a < b ? a : b; }
};