// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  auto total_shots = (k * l) / nl;
  auto total_slice = c * d;
  auto total_salt = p / np;

  cout << min({total_shots, total_slice, total_salt}) / n << '\n';

  return 0;
}
