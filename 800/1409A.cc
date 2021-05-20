// https://codeforces.com/problemset/problem/1409/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    auto diff = abs(b - a);
    auto d = div(diff, 10);

    int ans = 0;
    ans += d.quot;

    for (int i = 9; i > 0; --i) {
      d = div(d.rem, i);
      ans += d.quot;
    }

    cout << ans << '\n';
  }

  return 0;
}
