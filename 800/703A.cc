// https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pair<int, int>> v(n);
  for (auto &p : v) cin >> p.first >> p.second;

  int mw = 0, cw = 0;
  for (const auto [m, c] : v) {
    m > c ? ++mw : 0;
    c > m ? ++cw : 0;
  }

  cout << (mw == cw ? "Friendship is magic!^^" : (mw > cw ? "Mishka" : "Chris"))
       << '\n';

  return 0;
}
