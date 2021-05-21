// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  vector<int> v(3);
  for (auto &p : v) cin >> p;

  sort(begin(v), end(v));

  cout << (v[2] - v[1]) + (v[1] - v[0]) << '\n';

  return 0;
}
