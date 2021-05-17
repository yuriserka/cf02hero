// https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int x;
  cin >> x;

  auto d = div(x, 5);
  auto ans = (d.quot + 1) - (!d.rem ? 1 : 0);

  cout << ans << '\n';

  return 0;
}
