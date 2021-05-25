// https://codeforces.com/problemset/problem/1283/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int h, m;
    cin >> h >> m;

    auto total_time_day = 24 * 60;
    auto now = h * 60 + m;

    cout << total_time_day - now << '\n';
  }

  return 0;
}
