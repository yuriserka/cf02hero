// https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v(n);
  for (auto &g : v) cin >> g;

  auto ans = accumulate(begin(v), end(v), false,
                        [](auto acc, auto v) { return acc or v; });

  cout << (ans ? "HARD" : "EASY") << '\n';

  return 0;
}