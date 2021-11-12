// https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  auto ma = max(a, b);
  auto mi = min(a, b);

  cout << mi << ' ' << (ma - mi) / 2 << '\n';

  return 0;
}
