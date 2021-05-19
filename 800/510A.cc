// https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<string> mtx(n, string(m, '.'));

  for (int i = 0, j = 0; i < n; ++i) {
    if (!(i % 2)) {
      mtx[i] = string(m, '#');
    } else {
      mtx[i][j++ % 2 ? 0 : m - 1] = '#';
    }
  }

  for (auto r : mtx) {
    for (auto e : r) {
      cout << e;
    }
    cout << '\n';
  }

  return 0;
}
