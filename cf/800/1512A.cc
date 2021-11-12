// https://codeforces.com/problemset/problem/1512/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> m;
    for (auto &a : v) {
      cin >> a;
      ++m[a];
    }

    auto single =
        *find_if(begin(m), end(m), [](const auto p) { return p.second == 1; });

    auto idx = find(begin(v), end(v), single.first) - begin(v);

    cout << idx + 1 << '\n';
  }

  return 0;
}
