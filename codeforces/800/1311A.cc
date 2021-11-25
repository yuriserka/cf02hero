// https://codeforces.com/problemset/problem/1311/A

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

    int ans = 0;
    if (a > b) {
      auto diff = a - b;
      ans += diff % 2 ? 2 : 1;
    } else if (b > a) {
      auto diff = b - a;
      ans += diff % 2 ? 1 : 2;
    }

    cout << ans << '\n';
  }

  return 0;
}
