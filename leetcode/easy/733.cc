// https://leetcode.com/problems/flood-fill/

#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                int color) {
    dfs(image, sr, sc, color, image[sr][sc]);
    return image;
  }

  void dfs(vector<vector<int>>& image, int sr, int sc, int color,
           int initial_color) {
    const bool out_of_bounds =
        sr < 0 || sr >= image.size() || sc < 0 || sc >= image[sr].size();
    if (out_of_bounds || image[sr][sc] != initial_color ||
        image[sr][sc] == color) {
      return;
    }
    image[sr][sc] = color;
    dfs(image, sr + 1, sc, color, initial_color);
    dfs(image, sr - 1, sc, color, initial_color);
    dfs(image, sr, sc + 1, color, initial_color);
    dfs(image, sr, sc - 1, color, initial_color);
  }
};