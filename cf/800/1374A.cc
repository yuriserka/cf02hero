// https://codeforces.com/problemset/problem/1374/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int x, y, n;
    cin >> x >> y >> n;

    auto d = div(n, x);
    d.quot += (d.quot + 1) * x <= n;
    for (int k = d.quot; k >= 0; --k) {
      if (auto aux = (k * x) + y; aux > n) {
        continue;
      } else if (aux % x == y) {
        cout << aux << '\n';
        break;
      }
    }
  }

  return 0;
}
