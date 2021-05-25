// https://codeforces.com/problemset/problem/1399/B

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

    vector<long long> as(n), bs(n);
    for (auto &a : as) cin >> a;
    for (auto &b : bs) cin >> b;

    auto min_a = *min_element(begin(as), end(as));
    auto min_b = *min_element(begin(bs), end(bs));

    long long ans = 0;
    for (long long i = 0; i < n; ++i) {
      auto diff_a = abs(as[i] - min_a);
      auto diff_b = abs(bs[i] - min_b);

      ans += max(diff_a, diff_b);
    }

    cout << ans << '\n';
  }

  return 0;
}
