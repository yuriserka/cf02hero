// https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string g, h, d;
  cin >> g >> h >> d;

  map<char, int> m;
  map<char, int> md;

  for (auto c : g) ++m[c];
  for (auto c : h) ++m[c];
  for (auto c : d) ++md[c];

  if (m.size() != md.size()) {
    cout << "NO\n";
    return 0;
  }

  map<char, int> ans;
  set_difference(begin(m), end(m), begin(md), end(md),
                 inserter(ans, begin(ans)));

  cout << (ans.size() ? "NO" : "YES") << '\n';

  return 0;
}
