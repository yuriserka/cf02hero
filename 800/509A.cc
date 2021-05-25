// https://codeforces.com/problemset/problem/509/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<vector<int>> m(n, vector<int>(n, 1));
  for (int i = 1; i < n; ++i) {
    for (int j = 1; j < n; ++j) {
      m[i][j] = m[i - 1][j] + m[i][j - 1];
    }
  }

  int ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      ans = max(m[i][j], ans);
    }
  }

  cout << ans << '\n';

  return 0;
}
