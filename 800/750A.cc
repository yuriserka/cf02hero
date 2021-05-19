// https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  auto total_time = 240;
  total_time -= k;

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    total_time -= 5 * i;
    if (total_time < 0) break;
    ++ans;
  }

  cout << ans << '\n';

  return 0;
}
