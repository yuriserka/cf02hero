// https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<int> v(n);
  for (auto &y : v) cin >> y;

  sort(begin(v), end(v));

  int ans = 0;
  for (int i = 0; i < n - 2; i += 3) {
    ans += v[i] + k <= 5 and v[i + 1] + k <= 5 and v[i + 2] + k <= 5;
  }

  cout << ans << '\n';

  return 0;
}
