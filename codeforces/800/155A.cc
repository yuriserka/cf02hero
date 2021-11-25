// https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &p : v) cin >> p;

  int ma = v[0], mi = v[0];
  int ans = 0;
  for (int i = 1; i < n; ++i) {
    ans += v[i] > ma or v[i] < mi;
    ma = max(ma, v[i]);
    mi = min(mi, v[i]);
  }

  cout << ans << '\n';

  return 0;
}
