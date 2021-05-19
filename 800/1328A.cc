// https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    auto d = div(a, b);

    cout << (d.rem ? ((d.quot + 1) * b - a) : d.rem) << '\n';
  }

  return 0;
}
