// https://www.hackerrank.com/challenges/ctci-array-left-rotation/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'rotLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER d
 */

vector<int> rotLeft(vector<int> a, int d) {
  int l = a.size();
  vector<int> ans(l);
  for (int i = 0; i < l; ++i) ans[(l + i - d) % l] = a[i];
  return ans;
}