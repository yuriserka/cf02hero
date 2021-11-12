// https://codeforces.com/problemset/problem/1367/B

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

    vector<long long> v(n);
    int o = 0, e = 0;
    for (auto &a : v) {
      cin >> a;
      a % 2 ? ++o : ++e;
    }

    int not_ok = 0;
    for (int i = 0; i < n; ++i) {
      i % 2 == v[i] % 2 == false ? ++not_ok : 0;
    }

    auto k_e = n / 2 + (n % 2);
    auto k_o = n - k_e;

    cout << (e != k_e or k_o != o ? -1 : not_ok / 2) << '\n';
  }

  return 0;
}
