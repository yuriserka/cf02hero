// https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &a : v) cin >> a;

  auto ma = *max_element(begin(v), end(v));
  auto sum = accumulate(begin(v), end(v), 0);

  cout << n * ma - sum << '\n';

  return 0;
}
