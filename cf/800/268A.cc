// https://codeforces.com/problemset/problem/268/A

#include <bits/stdc++.h>

using namespace std;

struct Uniform {
  int h;
  int g;
};

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<Uniform> v(n);
  for (auto &t : v) cin >> t.h >> t.g;

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) continue;
      if (v[i].h == v[j].g) ++ans;
    }
  }

  cout << ans << '\n';

  return 0;
}
