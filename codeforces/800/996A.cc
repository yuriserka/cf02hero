// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v = {100, 20, 10, 5, 1};
  auto d = div(n, v[0]);

  int ans = d.quot;
  for (int i = 1; i < v.size(); ++i) {
    d = div(d.rem, v[i]);
    ans += d.quot;
  }

  cout << ans << '\n';

  return 0;
}
