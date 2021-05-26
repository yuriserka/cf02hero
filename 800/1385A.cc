// https://codeforces.com/problemset/problem/1385/a

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;

    int a, b, c;

    if (x == y) {
      a = x;
    } else {
      b = x;
      c = y;
    }

    if (x == z) {
      b = x;
    } else {
      a = x;
      c = z;
    }

    if (y == z) {
      c = y;
    } else {
      a = y;
      b = z;
    }

    if (max(a, b) == x and max(a, c) == y and max(b, c) == z) {
      cout << "YES\n" << a << ' ' << b << ' ' << c << '\n';
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
