// https://codeforces.com/problemset/problem/1360/B

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
    for (auto &s : v) cin >> s;

    sort(begin(v), end(v));

    int bb = n - 1;
    int ba = 0;

    int ans = INT_MAX;

    for (int i = 0; ba != bb and i < n; ++i, --bb) {
      ans = min(ans, abs(*max_element(begin(v) + ba, begin(v) + bb) -
                         *min_element(begin(v) + bb, end(v))));
    }

    cout << ans << '\n';
  }

  return 0;
}
