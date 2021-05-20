// https://codeforces.com/problemset/problem/1399/A

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
    for (auto &a : v) cin >> a;

    sort(begin(v), end(v));

    bool ok = true;
    for (int i = 0; ok and i < n - 1; ++i) {
      ok = v[i + 1] - v[i] <= 1;
    }

    cout << (ok ? "YES" : "NO") << '\n';
  }

  return 0;
}
