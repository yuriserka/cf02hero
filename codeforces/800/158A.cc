// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<int> v(n);
  for (auto &a : v) cin >> a;

  int ans = 0;
  for (const auto e : v) {
    if (e and e >= v[k - 1]) ++ans;
  }

  cout << ans << '\n';

  return 0;
}
