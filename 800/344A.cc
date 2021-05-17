// https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &m : v) cin >> m;

  int ans = 0;
  for (int i = 0; i < n; ++i, ++ans) {
    while (v[i] == v[i + 1]) ++i;
  }

  cout << ans << '\n';

  return 0;
}
