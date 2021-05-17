// https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  map<char, int> m;
  for (auto c : s) ++m[c];

  cout << (m.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';

  return 0;
}
