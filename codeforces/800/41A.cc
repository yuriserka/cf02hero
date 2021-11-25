// https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s1, s2;
  cin >> s1 >> s2;

  auto ans = s1;
  reverse(begin(ans), end(ans));

  cout << (s2 == ans ? "YES" : "NO") << '\n';

  return 0;
}