// https://codeforces.com/problemset/problem/707/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<vector<char>> v(n, vector<char>(m));
  auto is_bw = true;
  string bwp = "WGB";
  for (auto &r : v) {
    for (auto &e : r) {
      cin >> e;
      is_bw = is_bw and bwp.find(e) != string::npos;
    }
  }

  cout << (is_bw ? "#Black&White" : "#Color") << '\n';

  return 0;
}
