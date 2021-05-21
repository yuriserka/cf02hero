// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pair<int, int>> v(n);
  for (int i = 0, t; i < n; ++i) {
    cin >> t;
    v[i] = {t, i + 1};
  }

  const auto updt_v = [&v](int t) {
    const auto find_fn = [&v](int val) {
      const auto it =
          find_if(begin(v), end(v), [&val](auto p) { return p.first == val; });
      return make_tuple(it, *it);
    };

    const auto [it, val] = find_fn(t);
    if (it == end(v)) throw invalid_argument("");
    v.erase(it);
    return val;
  };

  vector<vector<pair<int, int>>> ans;
  for (int i = 0; i < n; ++i) {
    try {
      ans.push_back({updt_v(1), updt_v(2), updt_v(3)});
    } catch (...) {
      break;
    }
  }

  cout << ans.size() << '\n';
  for (const auto a : ans) {
    for (int i = 0; i < a.size(); ++i) {
      cout << a[i].second << (i < a.size() - 1 ? ' ' : '\n');
    }
  }

  return 0;
}
