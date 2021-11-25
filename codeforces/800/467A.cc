// https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = 0;
  int p, q;
  for (int i = 0; i < n; ++i) {
    cin >> p >> q;

    if ((p + 2) <= q) ++ans;
  }

  cout << ans << '\n';

  return 0;
}