// https://codeforces.com/problemset/problem/1294/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    vector<int> v(3);
    for (auto &i : v) cin >> i;

    long long n;
    cin >> n;

    auto ma = *max_element(begin(v), end(v));
    vector<int> diff(3);
    for (auto i = 0; i < 3; ++i) diff[i] = ma - v[i];

    auto total_2_eq = accumulate(begin(diff), end(diff), 0);
    n -= total_2_eq;

    auto d = lldiv(n, 3);

    cout << (n >= 0 and !d.rem ? "YES" : "NO") << '\n';
  }

  return 0;
}
