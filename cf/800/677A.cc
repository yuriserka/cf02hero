// https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, h;
  cin >> n >> h;

  vector<int> v(n);
  for (auto &a : v) cin >> a;

  int ans = 0;
  for (auto a : v) {
    ans += a <= h ? 1 : 2;
  }

  cout << ans << '\n';

  return 0;
}