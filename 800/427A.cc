// https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &r : v) cin >> r;

  int fp = 0;
  int co = 0;

  for (int i = 0; i < n; ++i) {
    if (v[i] == -1)
      fp ? --fp : ++co;
    else
      fp += v[i];
  }

  cout << co << '\n';

  return 0;
}
