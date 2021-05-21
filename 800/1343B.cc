// https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n / 2; ++i) v[i] = 2 * (i + 1);

    auto hlf = n / 2;
    auto diff = (hlf + 1) * (hlf + 1) - (hlf * hlf) + hlf;

    if (!(diff % 2)) {
      cout << "NO\n";
      continue;
    }

    for (int i = n / 2, k = 1; i < n; ++i, k += 2) {
      if (k == diff) k += 2;
      v[i] = k;
    }

    cout << "YES\n";
    for (int i = 0; i < n; ++i) {
      cout << v[i] << (i < n - 1 ? " " : "\n");
    }
  }

  return 0;
}
