// https://codeforces.com/problemset/problem/1433/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  vector<vector<string>> m(10, vector<string>(4, ""));
  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 4; ++j) {
      m[i][j] = string(j + 1, i + 1 + '0');
    }
  }

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 4; ++j) {
        ans += m[i][j].size();
        if (s == m[i][j]) {
          goto ANS;
        }
      }
    }

  ANS:
    cout << ans << '\n';
  }

  return 0;
}
