// https://codeforces.com/problemset/problem/935A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = 0;
  for (int i = 1; i < n; ++i) {
    if (!((n - i) % i)) ++ans;
  }

  cout << ans << '\n';

  return 0;
}
