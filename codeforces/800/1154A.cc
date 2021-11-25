// https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  vector<int> v(4);
  for (auto &x : v) cin >> x;

  sort(begin(v), end(v));

  int a = (v[0] - v[1] + v[2]) / 2;
  int b = v[0] - a;
  int c = v[3] - (a + b);

  cout << a << ' ' << b << ' ' << c << '\n';

  return 0;
}
