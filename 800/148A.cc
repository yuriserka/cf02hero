// https://codeforces.com/problemset/problem/148/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;

  vector<bool> v(d + 1, true);

  for (int i = 1; i <= d; ++i) {
    auto hurted = !(i % k) or !(i % l) or !(i % m) or !(i % n);
    v[i] = !hurted;
  }

  cout << count(begin(v), end(v), false) << '\n';

  return 0;
}
