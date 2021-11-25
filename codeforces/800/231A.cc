// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c >= 2) ++ans;
  }

  cout << ans << '\n';

  return 0;
}
