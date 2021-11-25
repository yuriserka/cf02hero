// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> as(n), bs(n);
  for (int i = 0; i < n; ++i) {
    cin >> as[i] >> bs[i];
  }

  int inside = 0;
  int ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    int ni = inside - as[i] + bs[i];
    ans = max(ans, ni);

    inside = ni;
  }

  cout << ans << '\n';

  return 0;
}
