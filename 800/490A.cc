// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<vector<int>> v(3);
  for (int i = 0, t; i < n; ++i) {
    cin >> t;
    v[t - 1].push_back(i + 1);
  }

  auto s = min_element(begin(v), end(v), [](const auto v1, const auto v2) {
             return v2.size() > v1.size();
           })->size();

  cout << s << '\n';
  for (int i = 0; i < s; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << v[j][i] << (j < 2 ? ' ' : '\n');
    }
  }

  return 0;
}
