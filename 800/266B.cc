// https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, t;
  cin >> n >> t;

  string s;
  cin >> s;

  for (int i = 0; i < t; ++i) {
    size_t last_pos = -2;
    while (true) {
      last_pos = s.find("BG", last_pos + 2);

      if (last_pos == string::npos) break;

      swap(s[last_pos + 1], s[last_pos]);
    }
  }

  cout << s << '\n';

  return 0;
}
