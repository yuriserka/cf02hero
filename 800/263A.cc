// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int x, y;
  int e;

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> e;
      if (e) {
        x = i;
        y = j;
      }
    }
  }

  int ans = 0;

  const auto updtCoord = [&ans](auto &var) {
    while (var != 2) {
      ++ans;
      var += var > 2 ? -1 : 1;
    }
  };

  updtCoord(x);
  updtCoord(y);

  cout << ans << '\n';

  return 0;
}
