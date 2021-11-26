// https://www.hackerrank.com/challenges/2d-array

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int hourglassSum(vector<vector<int>> arr) {
  int ans = INT_MIN;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      const int s = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2]) +
                    (arr[i + 1][j + 1]) +
                    (arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
      ans = max(ans, s);
    }
  }
  return ans;
}