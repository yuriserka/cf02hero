// https://codeforces.com/problemset/problem/1520/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool ok = true;

    for (auto it = begin(s); it != end(s); ++it) {
      while (*it == *next(it)) ++it;
      auto other = find(next(it), end(s), *it);
      if (other != end(s)) {
        ok = false;
        break;
      }
    }

    cout << (ok ? "YES" : "NO") << '\n';
  }

  return 0;
}
