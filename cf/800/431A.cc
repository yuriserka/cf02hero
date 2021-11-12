// https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  map<int, int> m;
  for (int i = 0, a; i < 4; ++i) {
    cin >> a;
    m[i + 1] = a;
  }

  string s;
  cin >> s;

  auto ans = accumulate(begin(s), end(s), 0, [&m](auto acc, const auto c) {
    return acc + m[c - '0'];
  });

  cout << ans << '\n';

  return 0;
}
