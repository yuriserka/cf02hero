// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &a : v) cin >> a;

  auto max_it = max_element(begin(v), end(v));
  auto max_it_val = *max_it;
  auto max_moves = distance(begin(v), max_it);
  v.erase(max_it);
  v.insert(begin(v), max_it_val);

  auto min_it = min_element(rbegin(v), rend(v));
  auto min_moves = distance(rbegin(v), min_it);

  cout << max_moves + min_moves << '\n';

  return 0;
}
