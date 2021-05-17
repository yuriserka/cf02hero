// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pair<int, int>> v(n);
  int p;
  for (int i = 1; i <= n; ++i) {
    cin >> p;
    v[i - 1] = {i, p};
  }

  sort(begin(v), end(v),
       [](const auto p1, const auto p2) { return p1.second < p2.second; });

  for (int i = 0; i < n; ++i) {
    cout << v[i].first << (i < n - 1 ? " " : "\n");
  }

  return 0;
}