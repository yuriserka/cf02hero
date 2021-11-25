// https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  string s;
  cin >> s;

  map<char, int> m;
  for (auto c : s) ++m[tolower(c)];

  cout << (m.size() == 26 ? "YES" : "NO") << '\n';

  return 0;
}
