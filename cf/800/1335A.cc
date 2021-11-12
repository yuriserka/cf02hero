// https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    auto d = lldiv(n, 2);

    cout << d.quot - !d.rem << '\n';
  }

  return 0;
}
