// https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s1, s2;
  cin >> s1 >> s2;

  bitset<120> b1(s1), b2(s2);
  auto ans = (b1 ^ b2).to_string();

  cout << ans.substr(120 - s1.size()) << '\n';

  return 0;
}
