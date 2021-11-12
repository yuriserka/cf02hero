// https://codeforces.com/problemset/problem/1353/B

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> as(n), bs(n);
    for (auto &a : as) cin >> a;
    for (auto &b : bs) cin >> b;

    int last_sum = accumulate(begin(as), end(as), 0);
    for (int i = 0; i < k; ++i) {
      auto min_a = min_element(begin(as), end(as));
      auto max_b = max_element(begin(bs), end(bs));
      iter_swap(min_a, max_b);

      if (auto sum_a = accumulate(begin(as), end(as), 0); last_sum < sum_a)
        last_sum = sum_a;
    }

    cout << last_sum << '\n';
  }

  return 0;
}
