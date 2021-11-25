// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>

using namespace std;

int main(const int argc, const char **argv) {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int w;
  cin >> w;

  cout << (w > 2 and !(w % 2) ? "YES" : "NO") << '\n';

  return 0;
}
