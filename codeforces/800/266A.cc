// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  string s;
  cin >> s;

  int ans = 0;
  for (auto it = begin(s); it != end(s) - 1; ++it) {
    if (*it == *(it + 1)) {
      s.erase(it);
      ++ans;
      --it;
    }
  }

  cout << ans << '\n';

  return 0;
}
